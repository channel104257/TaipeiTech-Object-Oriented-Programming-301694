#include "PlayGround.h"

PlayGround::PlayGround(int max_count) : current_count(0)
{
	PlayGround::max_count = (max_count >= 1) ? max_count : 5;
}

bool PlayGround::AddCount()
{
	if (current_count < max_count)
	{
		current_count += 1;
		return 1;
	}
	else
	{
		return 0;
	}
}

bool PlayGround::DecreaseCount()
{

	if (current_count > 0)
	{
		current_count -= 1;
		return 1;
	}
	else
	{
		return 0;
	}
}

int PlayGround::GetCurrentCount()
{
	return current_count;
}
