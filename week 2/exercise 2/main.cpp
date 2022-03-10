#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int boxVolumn(int length, int width, int height);
void outputvector(vector <int> &array);

int main()
{
	vector <int> integers1(4);
	vector <int> integers2(6);

	cout << "Size of the vector integers1 is " << integers1.size() << endl;
	cout << "vector after initialization : " << endl;
	outputvector(integers1);

	cout << "Size of the vector integers2 is " << integers2.size() << endl;
	cout << "vector after initialization : " << endl;
	outputvector(integers2);

	cout << "Enter six integers : ";
	cout << endl;
	for (size_t i = 0; i < integers1.size() - 1; i++)
	{
		cin >> integers1[i];
	}
	for (size_t i = 0; i < integers2.size(); i++)
	{
		if (i % 2 == 0)
		{
			cin >> integers2[i];
		}
	}
	cout << endl;

	integers1[3] = boxVolumn(integers1[0], integers1[1], integers1[2]);
	cout << "After input, the vectors contains : " << endl;
	outputvector(integers1);

	for (size_t i = 0; i < integers2.size() / 2; i++)
	{
		integers2[2 * i + 1] = integers2[2 * i] * integers2[2 * i] * integers2[2 * i];
	}

	cout << "After input, the vectors contains : " << endl;
	outputvector(integers2);
}

int boxVolumn(int length, int width, int height)
{
	return length * width * height;
}

void outputvector(vector <int> &array)
{
	size_t i;
	
	for (i = 0; i < array.size(); ++i)
	{
		cout << setw(12) << array[i];

		if ((i + 1) % 4 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;
}
