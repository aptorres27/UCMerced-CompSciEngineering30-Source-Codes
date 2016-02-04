#include<iostream>
#include "stack.cpp"
using namespace std;

int main()
{
	stack Paper;
	
	Paper.push(0); 	//Adding numbers to the stack
	Paper.push(1);
	Paper.push(2);
	
	cout<<"Top number: ";
	cout<<Paper.top()<<endl;	//Print out the number recently added
	
	Paper.push(3);
	Paper.push(4);
	Paper.push(5);
	Paper.push(6);
	
	cout<<"Numbers are...: ";	
	Paper.print();				//print out the numbers in the stack so far
	cout<<endl;
	
	cout<<"Top number: ";
	cout<<Paper.top()<<endl;	//Print out the number recently added to the stack 

	Paper.push(7);
	Paper.push(8);
	Paper.push(9);
	Paper.pop();				//Remove the number recently added to the stack
	
	cout<<"Numbers are...: ";	//print out the numbers in the stack so far
	Paper.print();
	cout<<endl;
	
	cout<<"Size is "<<Paper.size()<<endl;	//Print out how many numbers in the stack
	
	if(Paper.isEmpty() == false){ //check is the stack is empty
		cout<<"Not empty";
	} else
		cout<<"Empty";
	
	return 0;
	
}

