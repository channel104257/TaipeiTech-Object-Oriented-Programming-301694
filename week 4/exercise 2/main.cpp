#include <iostream>
#include <math.h>
#include "Triangle.h"
using namespace std;

void DisplayTriangleType(Triangle &tri)
{
	float* side_length = tri.GetSideLength();
	cout << "邊長為 (" << side_length[0] << ", "
		<< side_length[1] << ", " << side_length[2]
		<< ") 的三角形屬於：";
	// TO DO: 根據 tri 物件使用 switch...case 判斷並顯示三角形的類型
	switch(tri.GetType())
	{
	    case Triangle::Equilateral:
			cout << "It's Equilateral." << endl;
	    break;
		case Triangle::Isosceles:
			cout << "It's Isosceles." << endl;
		break;
		case Triangle::Right:
			cout << "It's Right." << endl;
		break;
		case Triangle::Normal:
			cout << "It's Normal." << endl;
		break;
		case Triangle::Invaild:
			cout << "It's Invaild." << endl;
		break;
	}
	cout << endl;
}

int main()
{
	// samples of various kinds of triangles
	Triangle triangle1(3, 3, 3), triangle2(4, 4, 5), triangle3(3, 4, 5),
		triangle4(3, 4, 6), triangle5(2, 2, 4);
	DisplayTriangleType(triangle1); // 正三角形
	DisplayTriangleType(triangle2); // 等腰三角形
	DisplayTriangleType(triangle3); // 直角三角形
	DisplayTriangleType(triangle4); // 一般三角形
	DisplayTriangleType(triangle5); // 無法構成三角形

	// triangle lengths from user
	float side1, side2, side3;
	cout << endl << "請輸入三角形 3 邊長：";
	cin >> side1 >> side2 >> side3;

	// display the input result
	Triangle user_tri(side1, side2, side3);
	DisplayTriangleType(user_tri);

	return 0;
}
