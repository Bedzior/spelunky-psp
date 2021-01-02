#include "EntityRegistry.hpp"
#include "prefabs/props/TutorialSign.hpp"
#include "components/generic/PositionComponent.hpp"
#include "components/generic/QuadComponent.hpp"
#include "components/generic/MeshComponent.hpp"
#include "TextureBank.hpp"
#include "TextureType.hpp"
#include "spritesheet-frames/MainMenuSpritesheetFrames.hpp"

entt::entity prefabs::TutorialSign::create()
{
    return create(0, 0);
}

entt::entity prefabs::TutorialSign::create(float pos_x_center, float pos_y_center)
{
    auto& registry = EntityRegistry::instance().get_registry();

    const auto entity = registry.create();

    PositionComponent position(pos_x_center, pos_y_center);
    QuadComponent quad(TextureType::MAIN_MENU, 2, 1);
    MeshComponent mesh;

    quad.frame_changed(MainMenuSpritesheetFrames::TUTORIAL);
    mesh.rendering_layer = RenderingLayer::LAYER_4_PROPS;
    mesh.camera_type = CameraType::MODEL_VIEW_SPACE;

    registry.emplace<PositionComponent>(entity, position);
    registry.emplace<QuadComponent>(entity, quad);
    registry.emplace<MeshComponent>(entity, mesh);

    return entity;
}
