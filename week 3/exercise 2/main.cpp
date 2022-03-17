#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef struct carType
{
	string brand;
	unsigned int price;

} CarType_t;

class CarRepository
{
public:
	void AddCar(string carbrand, unsigned int carPrice);
	bool DeleteCar(int carNumber);
	void ShowCars();

private:
	vector<CarType_t> cars;
};

void CarRepository::AddCar(string carbrand, unsigned int carPrice)
{
	CarType_t _cars;
	_cars.brand = carbrand;
	_cars.price = carPrice;

	cars.insert(cars.end(), _cars);
}

bool CarRepository::DeleteCar(int carNumber)
{
	if (cars.size() < carNumber)
	{
		return 0;
	}
	else
	{
		cars.erase(cars.begin() + (carNumber - 1));
		cout << endl;

		return 1;
	}
}

void CarRepository::ShowCars()
{
	for (size_t i = 0; i < cars.size(); i++)
	{
		cout << "Car No." << i + 1 << endl;
		cout << "Car Brand : " << cars[i].brand << endl;
		cout << "Car Price : " << cars[i].price << " Dollars" << endl;
		cout << endl;
	}
}

int main()
{
	CarRepository repo;
	repo.AddCar("Maserrati", 350000);
	repo.AddCar("BMW", 85000);
	repo.AddCar("toyota", 17000);
	repo.ShowCars();

	int deleteCarNo;
	cout << "Enter Car No. you want to delete : ";
	cin >> deleteCarNo;

	if (repo.DeleteCar(deleteCarNo) == false)
	{
		cout << "Car No." << deleteCarNo << " is invaild!" << endl;
	}
	else
	{
		repo.ShowCars();
	}

	return 0;
}
