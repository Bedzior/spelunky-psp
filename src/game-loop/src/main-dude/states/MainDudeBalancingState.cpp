#include "main-dude/states/MainDudeBalancingState.hpp"
#include "main-dude/MainDude.hpp"

#include "LevelGenerator.hpp"
#include "Collisions.hpp"

#include "Input.hpp"

void MainDudeBalancingState::enter(MainDude& main_dude)
{
    main_dude._animation.start(static_cast<std::size_t>(MainDudeSpritesheetFrames::BALANCING_0_FIRST),
                               static_cast<std::size_t>(MainDudeSpritesheetFrames::BALANCING_6_LAST),
                               75, true);
}

MainDudeBaseState* MainDudeBalancingState::update(MainDude& main_dude, uint32_t delta_time_ms)
{
    // Update components:

    main_dude._physics.update(main_dude, delta_time_ms);
    main_dude._quad.update(main_dude.get_x_pos_center(), main_dude.get_y_pos_center(), !main_dude._other.facing_left);
    main_dude._animation.update(main_dude, delta_time_ms);

    // Other:
    // TODO
    if (main_dude._physics.get_x_velocity() != 0.f)
    {
        return &main_dude._states.running;
    }

    if (main_dude._physics.get_y_velocity() > 0.f)
    {
        return &main_dude._states.falling;
    }
    else if (main_dude._physics.get_y_velocity() < 0.f)
    {
        return &main_dude._states.jumping;
    }
    
    MapTile* neighbours[9] = {nullptr};
    collisions::get_neighbouring_tiles(LevelGenerator::instance().getLevel(), main_dude._physics.get_x_position(), main_dude._physics.get_y_position(), neighbours);

    const auto* collidable_bottom_overlap = collisions::overlaps(neighbours, main_dude._physics.get_x_position(), main_dude._physics.get_y_position(), main_dude._physics.get_width(), main_dude._physics.get_height());

    if (collidable_bottom_overlap)
    {
        return &main_dude._states.standing;
    }

    return this;
}

MainDudeBaseState *MainDudeBalancingState::handle_input(MainDude& main_dude, const Input &input)
{
    if (input.left())
    {
        main_dude._physics.add_velocity(-MainDude::DEFAULT_DELTA_X, 0.0f);
    }
    if (input.right())
    {
        main_dude._physics.add_velocity(MainDude::DEFAULT_DELTA_X, 0.0f);
    }
    if (input.circle())
    {
        main_dude._physics.add_velocity(0.0f, -MainDude::JUMP_SPEED);
        return &main_dude._states.jumping;
    }
    if (input.cross())
    {
        return &main_dude._states.ducking;
    }
    if (input.bumper_r())
    {
        return &main_dude._states.throwing;
    }

    if (input.up())
    {
        const auto* exit_tile = main_dude.is_overlaping_tile(MapTileType::EXIT);
        if (exit_tile)
        {
            main_dude._physics.set_position(
                    exit_tile->x + main_dude._quad.get_quad_width() / 2,
                    exit_tile->y + main_dude._quad.get_quad_height() / 2);

            return &main_dude._states.exiting;
        }

        const auto* ladder_tile = main_dude.is_overlaping_tile(MapTileType::LADDER);
        const auto* ladder_deck_tile = main_dude.is_overlaping_tile(MapTileType::LADDER_DECK);

        if (ladder_tile || ladder_deck_tile)
        {
            const auto* tile = ladder_tile ? ladder_tile : ladder_deck_tile;
            main_dude._physics.set_position(
                    tile->x + main_dude._quad.get_quad_width() / 2,
                    main_dude.get_y_pos_center());

            return &main_dude._states.climbing;
        }

        return &main_dude._states.looking_up;
    }

    return this;
}
