#include "namespace.h"
#include <iostream>
using namespace std;
 namespace SALES {
// copies the lesser of 4 or n items from the array ar
// to the sales member of s and computes and stores the
// average, maximum, and minimum values of the entered items;
// remaining elements of sales, if any, set to 0
 	Sales::Sales(){}
	Sales::Sales(const double ar[], int n){
	int i;
	for(i = 0; i < n; i++)
		this->sales[i] = ar[i];
	double total = 0;
	this->min = ar[0];
	this->max = ar[0];
	for(i = 0; i < n; i++){
		total += ar[i];
		if(ar[i] > this->max)
			this->max = ar[i];
		if(ar[i] < this->min)
			this->min = ar[i];
		}
	this->average = (double) total / n;
	}

	Sales::Sales(Sales & s){
	cout << "Please input 4 sales " << endl;
	int i;
	double total, min, max, ar[4];
	total = min = max = 0;
	for(i = 0; i < 4; i++)
		cin >> ar[i];
	s = Sales(ar, 4);
	}

	void Sales::showSales() const{
		cout << "Sales: " << endl;
		for(int i = 0; i < sizeof(this->sales)/sizeof(double); i++)
			cout << "#" << i + 1 << " " << this->sales[i] << endl;
		cout << "Average: " << this->average << endl;
		cout << "Min: " << this->min << endl;
		cout << "Max: " << this->max << endl;
		}

}