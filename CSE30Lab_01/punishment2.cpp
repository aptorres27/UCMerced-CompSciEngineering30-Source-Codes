#include <iostream>
using namespace std;

int main()
{
	int lines;
	int typo;
	cout << "Enter the number of lines for the punishment: ";
	cin >> lines;
	
	if (lines < 0)
		{cout << "You entered an incorrect value for the number of lines!";
	}else{
		cout << "Enter the line for which we want to make a typo: ";
		cin >> typo;
		
		if (typo < 0 || typo > lines){
			cout << "You entered an incorrect value for a typo!";
			}else{
		
				for (int i=0; i<lines-1; i++) {
					if (i == typo-1)
						cout << "I will always use object oriented programing!";
					cout << "I will always use object oriented programming! ";
				}
				if (typo == lines)
					cout << "I will always use object oriented programing!";
			}
		}
	cout << "\n";
	return 1;
}
