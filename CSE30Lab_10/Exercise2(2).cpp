#include<iostream>
#include "Stack_char.cpp"
using namespace std;

int main()
{
	Stack_char Paper;
	
	cout<<"Function Call \t\t"<<"Output \t\t"<<"Stack Content"<<endl;
	
	cout<<"isEmpty()\t\t";
	if(Paper.isEmpty() == false){ //Check if the stack is empty
		cout<<"false"<<endl;
	} else
		cout<<"true"<<endl;
	
	cout<<"push(A)\t\t";		//character A is added to the stack
	Paper.push('A');
	cout<<"\t\t\t";
	Paper.print();
	cout<<"\n";
	
	cout<<"push(Y)\t\t";	//character Y is added to the stack
	Paper.push('Y');
	cout<<"\t\t\t";
	Paper.print();
	cout<<"\n";
	
	cout<<"size()\t\t\t";	//Check to the size of the stack
	cout<<Paper.size();
	cout<<"\t\t";
	Paper.print();
	cout<<"\n";
	
	cout<<"pop()\t\t\t";	//Remove a letter that was recently added from the stack 
	cout<<Paper.pop();
	cout<<"\t\t";
	Paper.print();
	cout<<"\n";
	
	cout<<"isEmpty()\t\t";		//Check if the stack is empty again
	if(Paper.isEmpty() == false){
		cout<<"false";
	} else
		cout<<"true";
	cout<<"\t\t";
	Paper.print();
	cout<<"\n";
	
	cout<<"push(D)\t\t";    //added character D to the stack
	Paper.push('D');
	cout<<"\t\t\t";
	Paper.print();
	cout<<"\n";
	
	cout<<"top()\t\t\t";	//Print the recently added character from the stack
	cout<<Paper.top();
	cout<<"\t\t";
	Paper.print();
	cout<<"\n";
	
	cout<<"push(T)\t\t";	//added character T to the stack
	Paper.push('T');
	cout<<"\t\t\t";
	Paper.print();
	cout<<"\n";
	
	cout<<"pop()\t\t\t";	//Remove a letter that was recently added from the stack 
	cout<<Paper.pop();
	cout<<"\t\t";
	Paper.print();
	cout<<"\n";
	
	return 0;
	
}
