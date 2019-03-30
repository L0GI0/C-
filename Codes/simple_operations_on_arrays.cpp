#include <iostream>
#include <cstring>
using namespace std;
	
int Fill_array(double *array, int size){
	int i;
	cout << "Please enter values (non numeric to terminate): \n";
	for(i = 0; i < size; i++){
		cin >>	array[i];
		if(cin.fail()){
			cout << "Input terminated\n";
			break;
		}	
	}
	return i;
}
	
void Show_array(double *array, int size){
	int i;
	cout << "\nPrinting array contents: \n";
	for(i = 0; i < size; i++){
		cout << array[i] << " ";
	}
	cout << endl;
}	

void Reverse_array(double *array, int size){
	
	double tempArray[size];
	int i;
	for(i = 0; i < size; i++)
		tempArray[i] = array[size - i - 1];
	memcpy(array, tempArray, size * sizeof(double));
}


int main(){

	double array[10];
	int length = Fill_array(array, 10);
	Show_array(array, length);
	Reverse_array(array, length);
	Show_array(array, length);
	Reverse_array(array + 1, length - 2);
	Show_array(array,length);



	return 0;
}