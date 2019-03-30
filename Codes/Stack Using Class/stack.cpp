#include "stack.h"

using namespace std;

Stack::Stack(){
	top = 0;
}

bool Stack::pop(Item & item){
	if(top > 0){
		item = items[--top];
		return true; 
	}
	else return false;
}

bool Stack::push(const Item & item){
	if(top < MAX){
		items[top++] = item;
		return true;
	}
	else return false;
}

bool Stack::isempty(){
	return (top == 0);
} 

bool Stack::isfull(){

	return (top == MAX);
}
