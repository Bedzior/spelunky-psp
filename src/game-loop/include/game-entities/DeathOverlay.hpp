#pragma once

#include <memory>
#include <string>

#include "GameEntity.hpp"
#include "components/TextComponent.hpp"
#include "viewport/Viewport.hpp"

class DeathOverlay : public GameEntity
{
public:

    explicit DeathOverlay(std::shared_ptr<Viewport>);

    void launch();
    void disable_input();
    void enable_input();

    void update(uint32_t delta_time_ms) override;
    bool is_scores_requested() const { return _scores_requested; };

private:

    std::string get_available_controls_msg() const;

    std::shared_ptr<Viewport> _viewport;

    struct
    {
        TextComponent game_over;
        TextComponent controls;
    } _texts;

    bool _disabled_input = false;
    bool _scores_requested = false;
};