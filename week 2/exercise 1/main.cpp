#include <iostream>
#include "sort.h"

using namespace std;

int main()
{
	double value1, value2, value3;
    cout << "Please enter 3 number : ";
	cin >> value1 >> value2 >> value3;

	sort(value1, value2, value3);

	cout << value1 << "=>" << value2 << "=>" << value3 << endl;
}
