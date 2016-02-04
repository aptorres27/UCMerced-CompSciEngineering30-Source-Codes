#include <iostream>
using namespace std;

int main()
{
    //user to input the dimension (n) of the square (n x n) array, and then asks the user to input the values 1
    //row at a time.
	int Size;
	int neg = 0;

	cout << "Enter the size of a 2D array: ";
	cin >> Size;
	
	if (Size > 10){
		cout << "ERROR: Your array is too large! Enter 1 to 10.";
		}
	else if (Size < 0){
		cout << "ERROR: You entered an incorrect value for the array size!";
		}
	
	else {
		int box [Size][Size];
	 //Limit the size of the array to maximum 10 x 10 
	
		for (int n = 0; n < Size; n++){
			cout << "Enter the values in the array for row " << n+1 << ", separated by a space, and press enter: ";
			for (int i = 0; i < Size; i++){
				cin >> box [n][i];
				if (box [n][i] < 0 ){
					neg = neg+1;
					}
				}
			}
		if (neg == 0){
			cout << "All values are non-negative!"; //tests whether they are negative or not
			}
		else {
			cout << "There are " << neg << " negative values!"; //tells us that they are negative values
			}
	}	
	cout << "\n";
	return 0;

}
