#include "Stack_char.h"
#include <iostream>
using namespace std;

Stack_char::Stack_char(){}

Stack_char::~Stack_char(){}

void Stack_char::push(char value){
	insertAtFront(value);
}

char Stack_char::pop(){
	
	char value = top();
	
	bool success = removeFromFront();
	
	return value;
}

char& Stack_char::top(){
	return (*getFirst()).val;	
}
