#include "client.h"

int main()
{
	GameWorld world;
	world.init();
	for (auto i = 0; i < 10; ++i)
	{
		world.update();
	}
	return 0;
}