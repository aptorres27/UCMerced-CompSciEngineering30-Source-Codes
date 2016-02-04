#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int checkArraySort(int A[],int array_max, int first, int last)
{
        int Asc = 0, Desc = 0;

        for (int i=0; i<array_max-1; i++){
                if (A[i] >= A[i+1]){
                        Asc = 1;
                        }
                }

        for (int i=0; i<array_max-1; i++){
                if (A[i] <= A[i+1]){
                        Desc = 1;
                        }
                }
        if (Asc == 1 && Desc == 1) return 0;
        if (Asc == 0) return 1;
        if (Desc == 0) return -1;
}

int main()
{
	int start=0, stop=0, T=0;
	const int array_max = 20;
	int arr[array_max];


	cout << "Enter beginning position to output: ";
	cin >> start;
	if (start<0 || start>19){
		cout << "You are trying to check an invalid range of array elements!" << endl;
		return -20;
		}


	cout << "Enter ending position to output: ";
	cin >> stop;
	if (stop<start || stop>19){
		cout << "You are trying to check an invalid range of array elements!" << endl;
		if (stop<start){
			return -10;
			}
		return -20;
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

	T = checkArraySort(arr, array_max, start, stop);

	if (T == -20 || T == -10){
		cout << "You are trying to check an invalid range of array elements!" << endl;
		}
	if (T == -1){
		cout << "The portion of array is sorted in descending order!" << endl;
		}
	if (T == 0){
		cout << "The portion of array is not sorted!" << endl;
		}
	if (T == 1){
		cout << "The portion of array is sorted in ascending order!" << endl;
		}

	myin.close();
	myout.close();
	return 0;
}
