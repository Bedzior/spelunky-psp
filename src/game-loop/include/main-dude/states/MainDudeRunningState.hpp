#pragma once

#include <memory>

#include "main-dude/states/MainDudeBaseState.hpp"

struct AnimationStep;

class MainDudeRunningState : public MainDudeBaseState
{
public:

    MainDudeBaseState* update(MainDude&, uint32_t delta_time_ms) override;
    MainDudeBaseState* handle_input(MainDude&, const Input& input) override;
    void enter(MainDude&) override;

private:
    std::shared_ptr<AnimationStep> _animation_step;
};
