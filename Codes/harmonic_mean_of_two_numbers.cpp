#include <iostream>

using namespace std;

float getMean(int a, int b){
	return (float) 1/(((float) 1/a) + ((float) 1/b));
}


int main(void){

	int a, b;
	cout << "Please enter 2 values to calculate their harmonic mean:\n";
	while((cin >> a >> b) && a != 0 && b != 0){
		cout << "Harmonic mean of " << a << " and " << b << " is " << getMean(a, b) << endl;
		cout << "Please enter 2 values to calculate their harmonic mean:\n";
	}



return 0;

}
