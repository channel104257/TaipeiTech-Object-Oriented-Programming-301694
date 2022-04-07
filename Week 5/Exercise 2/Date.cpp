#include "Date.h"

using namespace std;

bool Date::isLeapYear(int year)
{
	return ((((year) % 4) == 0 && ((year) % 100) != 0) || ((year) % 400) == 0);
}

void Date::SetDate(int year, unsigned short month, unsigned short day)
{
	if (year < 0)
	{
		throw invalid_argument("Year 輸入錯誤");
	}
	else if (year < 1912)
	{
		throw invalid_argument("ROC 還沒出生");
	}
	else
	{
		m_year = year;
	}

	if (month > 12 || month < 0)
	{
		throw invalid_argument("Month 輸入錯誤");
	}
	else
	{
		m_month = month;
	}

	if ( !isLeapYear(year) && month == 2 && day > 28)
	{
		throw invalid_argument("Day 輸入錯誤");
	}
	else if (isLeapYear(year) && month == 2 && day > 29)
	{
		throw invalid_argument("Day 輸入錯誤");
	}
	else if (month != 2 && day > daysInMonth[m_month])
	{
		throw invalid_argument("Day 輸入錯誤");
	}
	else
	{
		m_day = day;
	}
}

std::string Date::GetDateInROC()
{
	return "中華民國" + to_string(m_year - 1911) + "年" + to_string(m_month) + "月" + to_string(m_day) + "日";
}
