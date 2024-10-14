Description:

This project implements a Time Abstract Data Type (ADT) in C++. It allows users to manage and manipulate time values easily. The class supports operations like setting and retrieving time, incrementing hours, minutes, or seconds, and displaying the time in both 12-hour (AM/PM) and 24-hour formats. The implementation is useful for applications requiring precise time management and formatting.



Features:

Set and Get Time: Functions to set and retrieve hours, minutes, and seconds.
Time Increment: Increment functions for hours, minutes, and seconds with default values.
Time Formats: Display the time in both 12-hour (AM/PM) and 24-hour formats.



Constructors:

TimeADT(): Initializes the time to default values.
TimeADT(int h, int m, int s): Initializes the time with given hours, minutes, and seconds.



Setters:

void setHour(int h): Set the hour value.
void setMinute(int m): Set the minute value.
void setSecond(int s): Set the second value.
void setTime(int h, int m, int s): Set all time values at once.



Getters:

int getHour(): Get the hour value.
int getMinute(): Get the minute value.
int getSecond(): Get the second value.



Increment Functions:

void incSec(int inS = 1): Increment the seconds.
void incMin(int inM = 1): Increment the minutes.
void incHour(int inH = 1): Increment the hours.



Print Functions:

void printTwelveHourFormat(): Display time in 12-hour format.
void printTwentyFourHourFormat(): Display time in 24-hour format.



Usage:

This TimeADT class is ideal for applications that require basic time handling and formatting. You can set specific time values, increment time, and print the time in either 12-hour or 24-hour formats.

Example
cpp
Copy code
int main()
{

    TimeADT time(10, 30, 45);
    
    time.printTwelveHourFormat();   // Output: 10:30:45 AM
    
    time.incHour();
    
    time.printTwentyFourHourFormat(); // Output: 11:30:45
    
    return 0;
}



License
This project is licensed under the MIT License.
