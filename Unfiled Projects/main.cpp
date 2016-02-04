#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include "Time.h"

using namespace std;

string my_line;

int getTimeFromUser(string my_line, Time& stamp);
void print24Hour(Time& start, Time& end);

int main()
{
	Time start(0,0,0);
	Time end(0,0,0);

	cout << "Enter the start time for the lecture (format HH:MM:SS): ";
	getline(cin, my_line);
	if (getTimeFromUser(my_line, start) == 1){
		cout << "The start time entered is invalid!" << endl;
		return 0;
		}

	cout << "Enter the end time for the lecture (format HH:MM:SS): ";
	getline(cin, my_line);
	if (getTimeFromUser(my_line, end) == 1){
		cout << "The end time entered is invalid!" << endl;
		return 0;
		}

        print24Hour(start, end);
        cout << "\n";
        return 0;
}

int getTimeFromUser(string my_line, Time& stamp)
{
	string hour_s = my_line.substr (0,2);
	stamp.setHours(atoi(hour_s.c_str()));
        string minute_s = my_line.substr (3,2);
        stamp.setMinutes(atoi(minute_s.c_str()));
        string second_s = my_line.substr (6,2);
        stamp.setSeconds(atoi(second_s.c_str()));

        if (stamp.getHours() < 0 || stamp.getHours() > 23) return 1;
        if (stamp.getMinutes() < 0 || stamp.getMinutes() > 59) return 1;
        if (stamp.getSeconds() < 0 || stamp.getSeconds() > 59) return 1;

        return 0;
}

void print24Hour(Time& start, Time& end)
{
        cout << "The lecture starts at ";
        cout << setfill('0') << setw(2) << start.getHours() << ":";
        cout << setfill('0') << setw(2) << start.getMinutes() << ":";
        cout << setfill('0') << setw(2) << start.getSeconds();
        cout << " and ends at ";
        cout << setfill('0') << setw(2) << end.getHours() << ":";
        cout << setfill('0') << setw(2) << end.getMinutes() << ":";
        cout << setfill('0') << setw(2) << end.getSeconds();
}
