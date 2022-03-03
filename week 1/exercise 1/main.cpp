#include <iostream>

using namespace std;

int CubeByValue(int x);

int main()
{
	int x;
	int	&z = x;
	
	cout << "Enter first integer :";
	cin >> x;
	cout << "x = " << x << " before CubeByValue." << endl;
	cout << "Value returned by CubeByValue " << CubeByValue(x) << endl;
	cout << "x = " << x << " after CubeByValue." << endl;
	cout << endl;
	cout << "Enter second integer :";
	cin >> x;
	cout << "x = " << x << endl;
	cout << "z = " << z << endl;
	cout << "x^3 = " << CubeByValue(x) << endl;
	cout << "z^3 = " << CubeByValue(x) << endl;
}

int CubeByValue(int x)
{
	return x * x * x;
}
