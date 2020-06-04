#include "time/Timestep.hpp"

Timestamp Timestep::delay() const
{
    const auto delta_ms = (_end - _start);

    if (delta_ms > _frequency)
    {
        // no delay
        return delta_ms;
    }
    else
    {
        auto sleep_time_ms = _frequency - delta_ms;
        SDL_Delay(sleep_time_ms);
        return sleep_time_ms;
    }
    return delta_ms;
}
