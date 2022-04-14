#include <iostream>
#include <string>
#include "OrdinaryCar.h"
#include "VanCar.h"
#include "SportsCar.h"

using namespace std;

int main()
{
	int O_speedchange, V_speedchange, S_speedchange;
	int O_speed, V_speed, S_speed;
	string O_brand, V_brand, S_brand;

	OrdinaryCar O_car;
	VanCar V_car;
	SportsCar S_car;

	cout << "Ordinary Car Brand:";
	cin >> O_brand;
	O_car.GetBrandName(O_brand);
	cout << "Ordinary Car Ordinary Speed:";
	cin >> O_speed;
	O_car.GetInitSpeed(O_speed);
	cout << "After Accelerated : " << O_car.Accelerated() << endl;
	cout << "After Break : " << O_car.Break() << endl;

	cout << endl;

	cout << "VanCar Car Brand:";
	cin >> V_brand;
	V_car.GetBrandName(V_brand);
	cout << "VanCar Car Ordinary Speed:";
	cin >> V_speed;
	V_car.GetInitSpeed(V_speed);
	cout << "After Accelerated : " << V_car.Accelerated() << endl;
	cout << "After Break : " << V_car.Break() << endl;

	cout << endl;

	cout << "Sports Car Brand:";
	cin >> S_brand;
	S_car.GetBrandName(S_brand);
	cout << "Sports Car Ordinary Speed:";
	cin >> S_speed;
	S_car.GetInitSpeed(S_speed);
	cout << "After Accelerated : " << S_car.Accelerated() << endl;
	cout << "After Break : " << S_car.Break() << endl;
}
