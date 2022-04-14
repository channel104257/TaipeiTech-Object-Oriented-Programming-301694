#ifndef VANCAR_H
#define VANCAR_H

class VanCar : public OrdinaryCar
{
public:

	int Accelerated();
	int Break();

private:

	int speedchange = 5;
};

#endif // !VANCAR_H

