#include <iostream>
using namespace std;

int main()
{
	int Asize; //define 2 variables
	int x = 0;
    
    //First, you should ask the user to enter the size of the array,
	cout << "Enter the size of the array: ";
	cin >> Asize;
    
    //If the user enters an incorrect size, you should output the error message
	if (Asize < 1){
		cout << "ERROR: You entered an incorrect value for the array size!";
		}
    //If the input is a valid size for the array, ask the user to enter the data
	else{
		int Arr[Asize];
		cout << "Enter the number in the array, separated by a space, and press enter: ";
		for (int i=0; i<Asize; i++){
			cin >> Arr[i];
			}
		
		for (int i=0; i<Asize-1; i++){	//Checking decreasing
			if (Arr[i] >= Arr[i+1]){
				x = 1;
				}
			}
		if (x == 1){
			cout << "This is NOT an in increasing array!";
			}
		else {
			cout << "This IS an increasing array!";
			}

			for (int i = 0; i <Asize; i++){
			cout << Arr[i] << " ";
}
	}
	
	cout << "\n";
	return 1;
}
