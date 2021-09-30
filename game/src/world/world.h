#pragma once
#include <entt/entt.hpp>

class GameWorld
{
	using Tick = uint64_t;

	entt::registry registry_;
	Tick tick_ = 0;

public:
	void update();

	void take_snapshot();

	void from_snapshot();
};