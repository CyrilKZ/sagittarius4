#pragma once
#include <entt/entt.hpp>
#include "components/physics.h"

class GameWorld
{
    entt::registry registry_;
    Tick tick_ = 0;

public:
    void init();

    void update();

    void physcis_system_update();

    void take_snapshot();

    void from_snapshot();
};
