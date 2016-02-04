#include <iostream>
using namespace std;
int main()
{

int line;
int i;

	cout << "Enter the number of lines for the punishment:" << endl;
	cin >> line;

	if (line>0){

	for (i=1; i<=line; i++){
		cout << "I will always use object oriented programming.";
	}

	cout<< endl;

	}

	else
	cout<< "You entered an incorrect value for the number of lines!" << endl;

	return 0;
}
