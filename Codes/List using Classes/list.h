#pragma once

class Node{
	public:
		int value;
		Node *next;
};

class List{
private:
	Node *head;
	int length;
public:
	List();
	void addItem(int value);
	bool isEmpty();
	void printList();
};