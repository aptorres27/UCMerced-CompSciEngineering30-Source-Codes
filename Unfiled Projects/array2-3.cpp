#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // create a string that contains the characters in the reverse order
	string word;

	cout << "Enter the string to reverse: ";
	cin >> word;

	std::reverse(word.begin(), word.end());		//Command to reverse the string

	cout << "The reverse of the string is: ";
	cout << word;
	
	cout << "\n";
	return 0;
}
