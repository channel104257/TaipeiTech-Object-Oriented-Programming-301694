#include "OrdinaryCar.h"
#include "SportsCar.h"

#include <iostream>
#include <string>

using namespace std;

int SportsCar::Accelerated()
{
	SportsCar::speed = SportsCar::speed + SportsCar::speedchange;

	return SportsCar::speed;
}

int SportsCar::Break()
{
	SportsCar::speed = SportsCar::speed - SportsCar::speedchange;

	return SportsCar::speed;
}
