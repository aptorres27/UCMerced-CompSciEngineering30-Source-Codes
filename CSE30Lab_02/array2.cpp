#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string myword;

	cout << "Enter the string to reverse: ";
	cin >> myword;

	std::reverse(myword.begin(), myword.end());		//Command to reverse the string

	cout << "The reverse of the string is: ";
	cout << myword;
	
	cout << "\n";
	return 0;
}
