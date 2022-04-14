#include "Time.h"
 
using namespace std;
  
void Time::setTime(unsigned short hour, unsigned short minute, unsigned short second)
{
	returnString = "";

	if (hour >= 24 || hour < 0)
	{
		returnString += " Hour";
	}
	else
	{
		m_hour = hour;
	}

	if (minute >= 60 || minute < 0)
	{
		returnString += " Minute";
	}
	else
	{
		m_minute = minute;
	}

	if (second >= 60 || second < 0)
	{
		returnString += " Second";
	}
	else
	{
		m_second = second;
	}

	if (returnString != "")
	{
		returnString += "設定錯誤!";
		throw invalid_argument(returnString);
	}
}

string Time::Get12HourMode()
{
	if (m_hour >= 12)
	{
		string PM;
		
		if (m_hour == 12)
		{
			PM = to_string(12) + ":" + to_string(m_minute) + ":" + to_string(m_second) + " PM";
		}
		else
		{
			PM = to_string(m_hour - 12) + ":" + to_string(m_minute) + ":" + to_string(m_second) + " PM";
		}
		

		return PM;
	}
	else
	{
		string AM;
		
		if (m_hour == 0)
		{
			AM = to_string(m_hour + 12) + ":" + to_string(m_minute) + ":" + to_string(m_second) + " AM";
		}
		else
		{
			AM = to_string(m_hour) + ":" + to_string(m_minute) + ":" + to_string(m_second) + " AM";
		}

		return AM;
	}
}
