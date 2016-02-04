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
	int count = 0;
	for (i = 0; i < size-1; i++){
	
	int i_max = i;
	int max;
	for (j=i+1; j < size; j++){
		if (array[j]<array[i_max]){
			i_max = j;
			max = array[j];
		}
	}

	if(i_max > i){
	temp = array[i];
	array[i] = array[i_max]; //swap
	array[i_max] = temp;
	count++;
}
}

	cout<< "This is the sorted array in an descending order:"; 
	for (int i = 0; i < size; i++){
	cout << array[i] << "";
}

	cout << endl;

	cout << "The algorithm selected the <minimum or maximum> for the traverse of the array" << endl;
	cout << "It took" << count << "swaps to sort the array" << endl;
	
return 0;
}
