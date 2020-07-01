#include <cassert>

#include "components/AnimationComponent.hpp"
#include "main-dude/MainDude.hpp"

void AnimationComponent::update(MainDude& main_dude, uint32_t delta_time_ms)
{
    if (!_running)
    {
        return;
    }

    _timer_ms += delta_time_ms;
    if (_timer_ms < _current_step->_time_per_frame_ms)
    {
        return;
    }

    if (_current_frame_index == _current_step->_end_frame_index)
    {
        if (_current_step->_loop)
        {
            _current_frame_index = _current_step->_start_frame_index;
        }
        else if (!_animation_steps.empty())
        {
            _current_step = std::make_shared<AnimationStep>(_animation_steps.front());
            _animation_steps.pop();
        }
        else
        {
            _finished = true;
            _running = false;
        }
    }
    else
    {
        _current_frame_index++;
    }

    main_dude._quad.frame_changed(_current_frame_index);
    _timer_ms = 0;
}

std::shared_ptr<AnimationStep> AnimationComponent::start(std::vector<AnimationStep> animation_steps)
{
    clean_steps();
    for (const auto& element : animation_steps)
    {
        _animation_steps.push(element);
        assert(!element._loop || &element == &animation_steps.back());
    }
    _current_step = std::make_shared<AnimationStep>(_animation_steps.front());
    _current_frame_index = _current_step->_start_frame_index;
    _timer_ms = 0;
    _animation_steps.pop();

    _running = true;
    _finished = false;

    return _current_step;
}

std::shared_ptr<AnimationStep> AnimationComponent::start(std::size_t start_frame, std::size_t end_frame, uint32_t time_per_frame_ms, bool loop)
{
    clean_steps();
    _current_step = std::make_shared<AnimationStep>(start_frame, end_frame, time_per_frame_ms, loop);
    _current_frame_index = start_frame;
    _timer_ms = 0;

    _running = true;
    _finished = false;

    return _current_step;
}

std::shared_ptr<AnimationStep> AnimationComponent::resume(std::size_t start_frame, std::size_t end_frame)
{
    clean_steps();
    auto frame_offset = _current_step->_end_frame_index - _current_frame_index;
    _current_frame_index = start_frame + frame_offset;

    _current_step = std::make_shared<AnimationStep>(start_frame, end_frame, _current_step->_time_per_frame_ms, _current_step->_loop);

    _running = true;
    _finished = false;

    return _current_step;
}

void AnimationComponent::clean_steps()
{
    auto temp = std::queue<AnimationStep>{};
    _animation_steps.swap(temp);
}
