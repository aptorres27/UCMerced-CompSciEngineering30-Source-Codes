#include <iostream>
using namespace std;
int main()
{

int line;
int i;
int typo;

	cout << "Enter the number of lines for the punishment:" << endl;
	cin >> line;
	if (line<0){
	cout<< "You entered an incorrect value for the number of lines!" << endl;
	}
	
	cout << "Enter the line for which we want to make a typo:"<<endl;
	cin >> typo;
	if (typo<0){
	cout<< "You entered an incorrect value for the line typo!" << endl;
	}

	for (i=1; i<=line; i++){
	if (i==typo)
		cout << "I will always use object oriented programing.";

	else
		cout << "I will always use object oriented programming.";

	}


	cout<< endl;


	return 0;
}
