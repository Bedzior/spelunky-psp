#include "main-dude/states/MainDudeBalancingState.hpp"
#include "main-dude/MainDude.hpp"
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

    return this;
}
