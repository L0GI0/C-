#include "namespace.h"
#include <iostream>
using namespace std;
 namespace SALES {
// copies the lesser of 4 or n items from the array ar
// to the sales member of s and computes and stores the
// average, maximum, and minimum values of the entered items;
// remaining elements of sales, if any, set to 0
void setSales(Sales & s, const double ar[], int n){
	int i;
	for(i = 0; i < n; i++)
		s.sales[i] = ar[i];
	double total = 0;
	s.min = ar[0];
	s.max = ar[0];
	for(i = 0; i < n; i++){
		total += ar[i];
		if(ar[i] > s.max)
			s.max = ar[i];
		if(ar[i] < s.min)
			s.min = ar[i];
	}
	s.average = (double) total / n;
}

void setSales(Sales & s){
	cout << "Please input 4 sales " << endl;
	int i;
	double total, min, max;
	total = min = max = 0;
	for(i = 0; i < 4; i++){
		cin >> s.sales[i];
		total += s.sales[i];
		if(s.sales[i] > max)
			max = s.sales[i];
		if(s.sales[i] < min)
			min = s.sales[i];
	}
	s.average = (double) total / 4;
	s.min = min;
	s.max = max;
}

void showSales(const Sales & s){
	cout << "Sales: " << endl;
	for(int i = 0; i < sizeof(s.sales)/sizeof(double); i++)
		cout << "#" << i + 1 << " " << s.sales[i] << endl;
	cout << "Average: " << s.average << endl;
	cout << "Min: " << s.min << endl;
	cout << "Max: " << s.max << endl;
}

}