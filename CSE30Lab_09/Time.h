#ifndef TIME_H
#define TIME_H

using namespace std;

class Time
{
private:
	int hours;
	int minutes;
	int seconds;

public:
	Time(int h, int m, int s);

	void setHours(int h);
	int getHours();

	void setMinutes(int m);
	int getMinutes();

	void setSeconds(int s);
	int getSeconds();
};

#endif
