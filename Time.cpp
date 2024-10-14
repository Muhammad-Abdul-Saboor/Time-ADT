#include<iostream>
#include"Time.h"
using namespace std;
TimeADT::TimeADT()
{
	hours = 0;
	minutes = 0;
	seconds = 0;
}
TimeADT::TimeADT(int h, int m, int s) :TimeADT()
{
	if (h > 0 && h < 60)
	{
		hours = h;
	}
	if (m > 0 && m < 60)
	{
		minutes = m;
	}
	if (s > 0 && s < 60)
	{
		seconds = s;
	}
}
void TimeADT::setHour(int h)
{
	if (h >= 0 && h <= 23)
	{
		hours = h;
	}
}
void TimeADT::setMinute(int m)
{
	if (m >= 0 && m <= 59)
	{
		minutes = m;
	}
}
void TimeADT::setSecond(int s)
{
	if (s >= 0 && s <= 59)
	{
		seconds = s;
	}
}
void TimeADT::setTime(int h, int m, int s)
{
	if (h >= 0 && m >= 0 && s >= 0 && h <= 23 && m <= 59 && s <= 59)
	{
		hours = h;
		minutes = m;
		seconds = s;
	}
}
int TimeADT::getHour()
{
	return hours;
}
int TimeADT::getMinute()
{
	return minutes;
}
int TimeADT::getSecond()
{
	return seconds;
}
void TimeADT::incSec( int inS )
{
	seconds = seconds + inS;
	if (seconds >= 60)
	{
		minutes = minutes;
	}
}
void TimeADT::incMin( int inM )
{
	minutes = minutes + inM;
}
void TimeADT::incHour( int inH )
{
	hours = hours + inH;
}
void TimeADT::printTwelveHourFormat()
{
	if (hours >= 0 && hours <= 23 && minutes >= 0 && minutes <= 59 && seconds >= 0 && seconds <= 59)
	{
		if (hours != 0)
		{
			if (hours > 12)
			{
				hours = hours - 12;
				cout << hours << ":" << minutes << ":" << seconds << " PM";
			}
			else
			{
				cout << hours << ":" << minutes << ":" << seconds << " AM";
			}
		}
		else
		{
			hours = 12;
			cout << hours << ":" << minutes << ":" << seconds << " AM";
		}
	}
	else
	{
		cout << "Invalid Time data entered...";
	}
}
void TimeADT::printTwentyFourHourFormat()
{
	if (hours >= 0 && hours <= 23 && minutes >= 0 && minutes <= 59 && seconds >= 0 && seconds <= 59)
	{
		if (hours < 12)
		{
			cout << hours << ":" << minutes << ":" << seconds << " AM";
		}
		else
		{
			cout << hours << ":" << minutes << ":" << seconds << " PM";
		}
	}
	else
	{
		cout << "Invalid Time data entered...";
	}
}

	









