#include <iostream>
using namespace std;

int main()
{
	int lines;
	cout << "Enter the number of lines for the punishment: ";
	cin >> lines;
	
	if (lines < 0)
		{cout << "You entered an incorrect value for the number of lines!";
	}else{
		for (int i=0; i<lines; i++) {
			cout << "I will always use object oriented programming. ";
			}
		}
	cout << "\n";
	return 1;
}
