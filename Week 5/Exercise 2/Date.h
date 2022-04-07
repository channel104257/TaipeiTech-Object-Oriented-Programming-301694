#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
#include <stdexcept>

const short daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

class Date
{
public :

	void SetDate(int year, unsigned short month, unsigned short day);
	std::string GetDateInROC();

private :

	bool isLeapYear(int year);

	int m_year;
	unsigned short m_month;
	unsigned short m_day;
};

#endif // !DATE_H

