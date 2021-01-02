#include "Level.hpp"
#include "components/specialized/MainDudeComponent.hpp"
#include "main-dude/states/MainDudeCliffHangingState.hpp"
#include "Input.hpp"
#include "EntityRegistry.hpp"

void MainDudeCliffHangingState::enter(MainDudeComponent& dude)
{
    auto& registry = EntityRegistry::instance().get_registry();
    const auto& owner = dude._owner;

    auto& physics = registry.get<PhysicsComponent>(owner);
    auto& quad = registry.get<QuadComponent>(owner);

    physics.set_x_velocity(0.0f);
    physics.set_y_velocity(0.0f);
    physics.disable_gravity();
    quad.frame_changed(MainDudeSpritesheetFrames::HANGING_LEFT);
}

MainDudeBaseState* MainDudeCliffHangingState::update(MainDudeComponent& dude, uint32_t delta_time_ms)
{
    auto& registry = EntityRegistry::instance().get_registry();
    const auto& owner = dude._owner;

    const auto& input = Input::instance();

    if (input.jumping().changed() && input.jumping().value())
    {
        // In the original game, when jumped from a cliff, main dude was moved one pixel opposite of the faced side.
        // I assume this is to not have a collision and enter cliff-hanging-state immediately after exiting it,
        // as it actually helps Spelunky-PSP's implementation this way.

        float offset = 1.0f / 16.0f;

        auto& physics = registry.get<PhysicsComponent>(owner);
        auto& position = registry.get<PositionComponent>(owner);

        if (dude._other.facing_left)
        {
            //position.x_center += offset;
        }
        else
        {
            //position.x_center -= offset;
        }

        physics.set_y_velocity(-MainDudeComponent::JUMP_SPEED);
        physics.enable_gravity();

        return &dude._states.jumping;
    }

    return this;
}

void MainDudeCliffHangingState::exit(MainDudeComponent& dude)
{
    auto& registry = EntityRegistry::instance().get_registry();
    const auto& owner = dude._owner;

    auto& physics = registry.get<PhysicsComponent>(owner);
    physics.enable_gravity();
}
