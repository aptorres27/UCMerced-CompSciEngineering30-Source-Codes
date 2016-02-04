#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int start=0, stop=0;
	const int array_max = 20;
	int arr[array_max];


	cout << "Enter beginning position to output: ";
	cin >> start;
	if (start<0 || start>19){
		cout << "Wrong size!" << endl;
		return -2;
		}


	cout << "Enter ending position to output: ";
	cin >> stop;
	if (stop<start || stop>19){
		cout << "Wrong size!" << endl;
		return -2;
		}

	ifstream myin;
	myin.open ("in.txt");
	ofstream myout;
	myout.open ("out.txt");

	string line;


	for(int i=0; i<20; i++){
		getline (myin, line);
		stringstream(line) >> arr[i];

		if (i>=start && i<=stop){
		myout << arr[i] << " ";
		}
	}

	myin.close();
	myout.close();
	return 0;
}
