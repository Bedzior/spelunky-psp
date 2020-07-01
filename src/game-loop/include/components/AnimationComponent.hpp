#pragma once

#include <cstdint>
#include <cassert>
#include <queue>
#include <memory>

#include "TextureType.hpp"
#include "Quad.hpp"

class MainDude;
class AnimationComponent;
struct AnimationStep
{
    explicit AnimationStep(std::size_t start_frame_index, std::size_t end_frame_index, float time_per_frame_ms, bool loop)
        : _start_frame_index(start_frame_index)
        , _end_frame_index(end_frame_index)
        , _time_per_frame_ms(time_per_frame_ms)
        , _loop(loop)
    {
        assert(_end_frame_index > _start_frame_index);
    }

    void set_time_per_frame_ms(float value_ms) { _time_per_frame_ms = value_ms; };
    friend AnimationComponent;
private:
    std::size_t _start_frame_index = 0;
    std::size_t _end_frame_index = 0;
    float _time_per_frame_ms = 0;
    bool _loop = false;
};

class AnimationComponent
{
public:

    void update(MainDude&, uint32_t delta_time_ms);
    std::shared_ptr<AnimationStep> start(std::vector<AnimationStep> animation_steps);
    std::shared_ptr<AnimationStep> start(std::size_t start_frame, std::size_t end_frame, uint32_t time_per_frame_ms, bool loop);
    std::shared_ptr<AnimationStep> resume(std::size_t start_frame, std::size_t end_frame);
    void stop() { _running = false; }
    bool is_finished() const { return _finished; }

private:

    void clean_steps();

    std::queue<AnimationStep> _animation_steps;
    std::shared_ptr<AnimationStep> _current_step;

    bool _running = false;
    bool _finished = false;

    float _timer_ms = 0;
    std::size_t _current_frame_index = 0;
};
