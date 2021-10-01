#include "world.h"
#include <iostream>

void GameWorld::init()
{
	for (int i = 0; i < 10; ++i)
	{
		const auto entity = registry_.create();
		registry_.emplace<Position>(entity, 1.0f, 1.0f);
		if (i % 2 == 0) registry_.emplace<Velocity>(entity, 0.1f, 0.1f);
		if (i % 3 == 0) registry_.emplace<Acceleration>(entity, 0.01f, 0.01f);
	}
}

void GameWorld::update()
{
	physcis_system_update();
}

void GameWorld::physcis_system_update()
{
	auto view_va = registry_.view<Velocity, const Acceleration>();
	view_va.each([](auto& v, const auto& a) { v += a; });
	auto view_pv = registry_.view<Position, const Velocity>();
	view_pv.each([](auto& p, const auto& v) { p += v; });
	auto view = registry_.view<const Position>();
	view.each([](const auto& p) { std::cout << '[' << p.x << ", " << p.y << ']' << ' '; });
	std::cout << std::endl;
}

void GameWorld::take_snapshot()
{

}