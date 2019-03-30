#include "namespace.h"
#include <iostream>
using namespace std;

int main(void){
	using namespace SALES;
	const double Array[] =  {500.0, 434.21, 542.3, 12313.3, 768654.32};
	struct Sales sales[2];
	setSales(sales[0], Array, 5);
	showSales(sales[0]);
}