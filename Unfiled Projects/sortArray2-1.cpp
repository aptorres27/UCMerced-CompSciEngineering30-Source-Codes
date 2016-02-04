#include <iostream>
using namespace std;

int Size = 0;
int order = 0;
int Arr[0];

void sortArr();
int main()
{
	cout << "Enter the size of the array: ";
	cin >> Size;

	if (Size < 1) {
		cout << "ERROR: You entered an incorrect value for the array size!";
	}

	else {
		Arr[Size];

		cout << "Enter the numbers in the array, separated by a space, and press enter: ";
		for (int i = 0; i < Size; i++){
			cin >> Arr[i];
			}

		cout << "Sort in ascending (0) or descending (1) order? ";
		cin >> order;
		sortArr();

		if (order == 0){
			cout << "This is the sorted array in ascending order: ";
			for (int n = 0; n < Size; n++){
				cout << Arr[n] << " ";
				}
			}
		else if (order == 1){
			cout << "This is the sorted array in descending order: ";
			for (int n = 0; n < Size; n++){
				cout << Arr[n] << " ";
				}
			}
		}
	cout << "\n";
	return 1;
}

void sortArr()
{
	int i, j, key;

	if (order == 1){
		for (j = 1; j < Size; j++){
			key = Arr[j];
			for (i = j-1; (i>=0) && (Arr[i] < key); i--){
				Arr[i+1] = Arr[i];
				}
			Arr[i+1] = key;
			}
		}
	else if (order == 0){
                for (j = 1; j < Size; j++){
                        key = Arr[j];
                        for (i = j-1; (i>=0) && (Arr[i] > key); i--){
                                Arr[i+1] = Arr[i];
                                }
                        Arr[i+1] = key;
                        }
		}
}
