#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include "Time.h"

Time::Time(int h, int m, int s)	//constructor
{
	hours = h;
	minutes = m;
	seconds = s;
};

int Time :: getHours()			//accessors
{
	return hours;
}

void Time :: setHours(int h)		//mutators
{
	hours = h;
}

int Time :: getMinutes()
{
	return minutes;
}

void Time :: setMinutes(int m)
{
	minutes = m;
}

int Time :: getSeconds()
{
	return seconds;
}

void Time :: setSeconds(int s)
{
	seconds = s;
}
