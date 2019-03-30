#include <iostream>

using namespace std;

double add(double a, double b){
	return a + b;
}

double multiply(double a, double b){
	return a * b;
}

double devide(double a, double b){
	return a / b;
}

double calculate(double a, double b, double (*fun)(double , double)){
	return fun(a, b);
}


int main(){
	int i;
	double a, b;
	double (*fun[3])(double, double) = {add, multiply, devide};
	char *functions[] = {"add", "multiply", "devide"};
	cout << "Please enter pair of dobule values to calculate (non numeric value to terminate) : \n";
	while(cin >> a >> b)
		for(i = 0; i < 3; i++)
		cout << functions[i] << " " << calculate(a, b, fun[i]) << endl;
	


	return 0;
}