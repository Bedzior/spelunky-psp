#include "EntityRegistry.hpp"
#include "main-dude/states/MainDudeRunningState.hpp"
#include "components/specialized/MainDudeComponent.hpp"
#include "Input.hpp"

void MainDudeRunningState::enter(MainDudeComponent& dude)
{
    auto& registry = EntityRegistry::instance().get_registry();
    const auto& owner = dude._owner;

    auto& animation = registry.get<AnimationComponent>(owner);

    if (dude._states.current == &dude._states.running_looking_up)
    {
        animation.resume(static_cast<std::size_t>(MainDudeSpritesheetFrames::RUN_LEFT_0_FIRST),
                                    static_cast<std::size_t>(MainDudeSpritesheetFrames::RUN_LEFT_5_LAST));
    }
    else
    {
        animation.start(static_cast<std::size_t>(MainDudeSpritesheetFrames::RUN_LEFT_0_FIRST),
                                   static_cast<std::size_t>(MainDudeSpritesheetFrames::RUN_LEFT_5_LAST),
                                   75, true);
    }
}

MainDudeBaseState *MainDudeRunningState::update(MainDudeComponent& dude, uint32_t delta_time_ms)
{
    auto& registry = EntityRegistry::instance().get_registry();
    const auto& owner = dude._owner;

    const auto& input = Input::instance();

    auto& animation = registry.get<AnimationComponent>(owner);
    auto& physics = registry.get<PhysicsComponent>(owner);
    auto& quad = registry.get<QuadComponent>(owner);
    auto& position = registry.get<PositionComponent>(owner);

    if (input.left().value() && !physics.is_left_collision())
    {
        physics.set_x_velocity(physics.get_x_velocity() - MainDudeComponent::DEFAULT_DELTA_X);
    }

    if (input.right().value() && !physics.is_right_collision())
    {
        physics.set_x_velocity(physics.get_x_velocity() + MainDudeComponent::DEFAULT_DELTA_X);
    }

    if (input.jumping().changed() && input.jumping().value())
    {
        physics.set_y_velocity(-MainDudeComponent::JUMP_SPEED);
        return &dude._states.jumping;
    }

    if (input.ducking().value())
    {
        return &dude._states.crawling;
    }

    if (input.running_fast().value())
    {
        physics.set_max_x_velocity(MainDudeComponent::MAX_RUNNING_VELOCITY_X);
        animation.set_time_per_frame_ms(50);
    }
    else
    {
        physics.set_max_x_velocity(MainDudeComponent::DEFAULT_MAX_X_VELOCITY);
        animation.set_time_per_frame_ms(75);
    }

    if (input.throwing().changed() && input.throwing().value())
    {
        return &dude._states.throwing;
    }

    if (input.up().value())
    {
        const auto* exit_tile = dude.is_overlaping_tile(MapTileType::EXIT, physics, position);

        if (exit_tile)
        {
            position.set_position_on_tile(exit_tile);
            return &dude._states.exiting;
        }

        const auto* ladder_tile = dude.is_overlaping_tile(MapTileType::LADDER, physics, position);
        const auto* ladder_deck_tile = dude.is_overlaping_tile(MapTileType::LADDER_DECK, physics, position);

        if (ladder_tile || ladder_deck_tile)
        {
            const auto* tile = ladder_tile ? ladder_tile : ladder_deck_tile;
            position.x_center = tile->x + quad.get_quad_width() / 2;
            return &dude._states.climbing;
        }

        return &dude._states.running_looking_up;
    }

    if (physics.get_x_velocity() == 0.0f)
    {
        return &dude._states.standing;
    }

    if (physics.get_y_velocity() > 0.0f)
    {
        return &dude._states.falling;
    }
    else if (physics.get_y_velocity() < 0.0f)
    {
        return &dude._states.jumping;
    }

    return this;
}
