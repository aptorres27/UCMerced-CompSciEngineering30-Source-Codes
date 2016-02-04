#include <iostream> 
#include <string>
using namespace std;

int main()
{
	string namestring;
	cout << "Please enter your name: ";
	getline (cin, namestring);
	cout << "Welcome to CSE030, " << namestring << "!" << endl;
	
	return 1;
}

