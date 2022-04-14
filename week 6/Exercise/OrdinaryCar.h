#ifndef ORDINARYCAR_H
#define ORDINARYCAR_H

#include <string>

class OrdinaryCar
{
public:

	std::string ShowBrandName();
	void GetBrandName(std::string Brand);

	int ShowSpeed();
	void GetInitSpeed(int speed);

	int Accelerated();
	int Break();

protected:

	std::string Brand;
	int speed;
	int speedchange = 10;
};

#endif // !ORDINARYCAR_H

