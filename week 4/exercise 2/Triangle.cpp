#include "Triangle.h"
#include <math.h>

Triangle::Triangle(float L1, float L2, float L3)
{
	if (L1 > L2)
	{
		float temp = L1;
		L1 = L2;
		L2 = temp;
	}
	if (L2 > L3)
	{
		float temp = L2;
		L2 = L3;
		L3 = temp;
	}
	if (L1 > L2)
	{
		float temp = L1;
		L1 = L2;
		L2 = temp;
	}
	
	side_length[0] = L1; // shortest
	side_length[1] = L2; // middle
	side_length[2] = L3; // longest
}

Triangle::Type Triangle::GetType()
{
	if ((side_length[0] + side_length[1]) > side_length[2])
	{
		if (side_length[0] == side_length[1] && side_length[2] == side_length[1])
		{
			return Equilateral;
		}

		if (side_length[0] == side_length[1] || side_length[2] == side_length[1] || side_length[0] == side_length[2])
		{
			return Isosceles;
		}

		if (sqrt(pow(side_length[0], 2) + pow(side_length[1], 2)) == side_length[2])
		{
			return Right;
		}

		return Normal;
	}
	else
	{
		return Invaild;
	}
}

float* Triangle::GetSideLength()
{
	return side_length;
}
