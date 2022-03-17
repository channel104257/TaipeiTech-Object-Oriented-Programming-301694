#include <iostream>
#include <string>

using namespace std;

class Company
{
public:

	Company(string newCompanyname);
	void setCompanyName(string newCompanyname);
	string getCompanyName();

private:

	string companyname;

};

Company::Company(string newCompanyname)
{
	setCompanyName(newCompanyname);
}

void Company::setCompanyName(string newCompanyname)
{
	companyname = newCompanyname;
}

string Company::getCompanyName()
{
	return companyname;
}

int main()
{
	Company company("NTUT Lab321");
	cout << "Original company name : " << company.getCompanyName() << endl << endl;

	string newCompanyName;
	cout << "Enter the new number name : ";
	getline(cin, newCompanyName);
	company.setCompanyName(newCompanyName);

	cout << endl << "New Company Name : " << company.getCompanyName() << endl;

	return 0;
}

