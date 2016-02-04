#include <iostream>
using namespace std;

string strg1, strg2;
int repeats = 1;

void combineStr();
int main()
{
	while(repeats > 0){	// This while loop repeats the program
		cout << "Enter a string: ";
		cin >> strg1;
		strg2 = strg1;

		cout << "Enter a number of times: ";
		cin >> repeats;

		if(repeats > 0){
			combineStr();
			cout << "The resulting string is: ";
			cout << strg1 << "\n";
			}
		}
	cout << "\n";
	return 1;
}

void combineStr()// Concatenates the string
{
	string strg2 = strg1;
	for (int i = 1; i < repeats; i++){
		strg1 += strg2;
		}
}
