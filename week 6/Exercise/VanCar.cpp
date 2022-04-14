#include "OrdinaryCar.h"
#include "VanCar.h"

#include <iostream>
#include <string>

using namespace std;

int VanCar::Accelerated()
{
	VanCar::speed = VanCar::speed + VanCar::speedchange;

	return VanCar::speed;
}

int VanCar::Break()
{
	VanCar::speed = VanCar::speed - VanCar::speedchange;

	return VanCar::speed;
}
