#include<iostream>
#include"Time.h"
using namespace std;
int main()
{
	TimeADT a;
	a.setSecond(40);
	a.incSec(20);
	cout << a.getSecond();



	return 0;
}