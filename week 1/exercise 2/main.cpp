#include <iostream>

using namespace std;

void CubeByReference(int &x);

int main()
{
	int x;
	int &z = x;

	cout << "Enter first integer : ";
	cin >> x;
	cout << "x = " << x << " before CubeByReference." << endl;
	CubeByReference(x);
	cout << "x = " << x << " after CubeByReference." << endl;
	cout << endl;
	cout << "Enter second integer : ";
	cin >> x;
	cout << "x = " << x << endl;
	cout << "z = " << z << endl;
	CubeByReference(x);
	cout << "x^3 = " << x << endl;
	cout << "z^3 = " << z << endl;
}

void CubeByReference(int &x)
{
	x = x * x * x;
}
