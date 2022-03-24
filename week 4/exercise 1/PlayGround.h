#pragma once
class PlayGround
{
public:
	PlayGround(int max_count = 5);

	bool AddCount();
	bool DecreaseCount();
	int GetCurrentCount();

private:
	int max_count;
	int current_count;
};

