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

int i, j, temp; //temp is temporary
for (i = 0; i < size; i++){
	for (j = 0; j < size; j++){
	if (array[j] > array[i]) {
	temp = array[i]; // temp is holding two different values
	array[i]= array[j]; //swap
	array[j] = temp;
	}
	}
	}
	cout << "This is the sorted array in ascending order.";
	for (int j = 0; j < size; j++){
	cout << array[j] << " ";
 // Printing out the numbers switch in array in ascending order
}

	cout << "The algorithm selected the  maximum for the traverse of the array.";
	return 0;
}
	 

