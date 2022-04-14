#include <iostream>
#include <string>
#include "OrdinaryCar.h"

using namespace std;

string OrdinaryCar::ShowBrandName()
{
	return OrdinaryCar::Brand;
}

void OrdinaryCar::GetBrandName(string Brand)
{
	OrdinaryCar::Brand = Brand;
}

void OrdinaryCar::GetInitSpeed(int speed)
{
	OrdinaryCar::speed = speed;
}

int OrdinaryCar::ShowSpeed()
{
	return OrdinaryCar::speed;
}

int OrdinaryCar::Accelerated()
{
	OrdinaryCar::speed = OrdinaryCar::speed + OrdinaryCar::speedchange;

	return OrdinaryCar::speed;
}

int OrdinaryCar::Break()
{
	OrdinaryCar::speed = OrdinaryCar::speed - OrdinaryCar::speedchange;

	return OrdinaryCar::speed;
}
