#include "list.h"
#include <iostream>

using namespace std;

void List::addItem(int value){
		Node *item = new Node;
		item->value = value;
		item->next = this->head;
		this->head = item;
		length++;
	}
bool List::isEmpty(){ return length == 0;}

List::List(){
	length = 0;
	head = NULL;
}

void List::printList(){
	Node *tmp = head;
	while(tmp){
		cout << tmp->value << " ";
		tmp = tmp->next;
	}
}
