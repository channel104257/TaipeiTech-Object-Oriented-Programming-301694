#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <iomanip>
#include <string>
#include <stdexcept>

class Time
{
public :
	void setTime(unsigned short hour, unsigned short minute, unsigned short second);
	std::string Get12HourMode();

private :
	unsigned short m_hour;
	unsigned short m_minute;
	unsigned short m_second;

	std::string returnString;
};


#endif // !TIME_H

