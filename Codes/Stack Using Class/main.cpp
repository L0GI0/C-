#include "stack.h"
#include <iostream>

using namespace std;
	
int main(void){
	double runningTotal = 0;
	Stack st;
	Item customer;
	cout << "Please choose option\n A. Add a customer	P. Process a payment	Q. Quit\n";
	char option;
	while((option = cin.get()) && option != 'Q' && option != 'q'){
		while(cin.get() != '\n');
		switch(option){
			case 'a':
			case 'A':
				cout << "Please enter customer name: ";
				cin.getline(customer.fullname, 35);
				cout << "Please enter customer payment: ";
				cin >> customer.payment;
				cin.ignore(); 
				st.push(customer); 
				break;
			case 'p':
			case 'P':
				if(st.isempty()){
					cout << "Stack is empty, you need more customers\n";
					break;
				}
				st.pop(customer);
				runningTotal += customer.payment;
				cout << "Customer payment was " << customer.payment << " now running total value is " << runningTotal << endl;
				break;
			default: 
				break;
		}
		cout << "Please choose option\n A. Add a customer	P. Process a payment	Q. Quit\n";
	}	

	return 0;
}
