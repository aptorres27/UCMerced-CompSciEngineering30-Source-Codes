#include <iostream>
using namespace std;

int main()
{
	int Size;
	int T = 0;

	cout << "Enter the size of the array: ";
	cin >> Size;

	if (Size < 1){
		cout << "ERROR: You entered an incorrect value for the array size!";
		}
	else{
		int Arr[Size];
		cout << "Enter the number in the array, separated by a space, and press enter: ";
		for (int i=0; i<Size; i++){
			cin >> Arr[i];
			}
		
		for (int i=0; i<Size-1; i++){			//Checking for any decrease
			if (Arr[i] >= Arr[i+1]){
				T = 1;
				}
			}
		if (T == 1){
			cout << "This is NOT an in increasing array!";
			}
		else {
			cout << "This IS an increasing array!";
			}
	}
	
	cout << "\n";
	return 1;
}
