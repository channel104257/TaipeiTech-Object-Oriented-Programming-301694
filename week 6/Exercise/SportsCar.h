#ifndef SPORTCAR_H
#define SPORTCAR_H

class SportsCar : public OrdinaryCar
{
public:

	int Accelerated();
	int Break();

private:

	int speedchange = 50;
};

#endif // !SPORTCAR_H
