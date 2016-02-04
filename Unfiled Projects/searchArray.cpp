#include <iostream>
using namespace std;

int main(){

int size;

	cout << "Enter the size of the array: ";
	cin >> size;

	if (size < 0){
		cout << "ERROR: you entered an incorrect value for the array size!" << endl;

	return 0;

}

	int array[size];

cout << "Enter the numbers in the array, separated by a space, and press enter: ";
	for (int i = 0; i < size; i++){
	cin >> array[i];

	}
int v;
int search = 0;

cout << "Enter a number to search for in the array:";
cin >> v;
bool error = false; // Checking if the value is not found

for (int j = 0; j <size; j++){
search++; //Counting how many search to find the value
 if (v == array[j]){
	error = true;
	cout << "Found value " << v << " at index " << j << " ,which took " << search << " checks." << endl;
 if (search == 1){
	cout << "We ran into the best case scenario!" << endl; 

	return 0;
}
 if (search == size){
	cout << "We ran into the worst case scenario!" << endl;
	
	return 0;
}
}
}
 if (!error){
	cout << "The value v was not found in the array!";
}
return 0;
} 




