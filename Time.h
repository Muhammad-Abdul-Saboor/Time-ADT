#ifndef TIME_H
class TimeADT
{
	int hours;
	int minutes;
	int seconds;
public:
	TimeADT();
	TimeADT(int h, int m, int s);
	void setHour(int h);
	void setMinute(int m);
	void setSecond(int s);
	void setTime(int h, int m, int s);
	int getHour();
	int getMinute();
	int getSecond();
	void incSec(int inS = 1);
	void printTwelveHourFormat();
	void printTwentyFourHourFormat();
	void incMin(int inM = 1);
	void incHour(int inH = 1);
};
#endif