#include <iostream>

using namespace std;
	
	int factorial(int value){
		if (value == 0)
			return 1;
		return value * factorial(value - 1);
	}
	
	
int main(){
	int value;
	cout << "Please enter a value, (enter non numeric value to terminate) \n";
	while(cin >> value){
	cout << "Factorial of " << value << " is equal to " << factorial(value) << endl;
	cout << "Please enter a value: (enter non numeric value to terminate) \n";
	}
	cout << "Bye!\n";
}