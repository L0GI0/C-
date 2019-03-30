#include <iostream>
#include <array>
#include <string>

#define Seasons  4

struct exp{
	double expensesArray[Seasons];
};

char  *Snames[] =
{"Spring", "Summer", "Fall", "Winter"};
// function to modify array object
void fill(exp *pa);
// function that uses array object without modifying it
void show(exp *da);

int main(){
	exp expenses;
	fill(&expenses);
	show(&expenses);
	exp expenses2 = expenses;
	std::cout << "\n Print expenses2 \n";
	show(&expenses2);
	return 0;
}

void fill(exp *pa){

using namespace std;
for (int i = 0; i < Seasons; i++)
{
cout << "Enter " << Snames[i] << " expenses: ";
cin >> pa->expensesArray[i];
}
}

void show(exp *da){
using namespace std;
double total = 0.0;
cout << "\nEXPENSES\n";
for (int i = 0; i < Seasons; i++)
{
cout << Snames[i] << ": $" << da->expensesArray[i] << endl;
total += da->expensesArray[i];
}
cout << "Total Expenses: $" << total << endl;
}