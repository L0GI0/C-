#include <iostream>

using namespace std;


int fillArray(int *golfScores){
	int i;
	cout << "Please fill the array with your golf scores, enter non numeric value to terminate\n";
	for(i = 0; i < 10; i++){
		cin >> golfScores[i];
		if(cin.fail()){
			cout << "End of input\n";
			break;
		}
	}
	return i;
}

void displayArray(int length, int *golfScores){
	int i;
	for(i = 0; i < length; i++){
		cout << golfScores[i] << " " ;
	}
}

float getAverage(int length, int *golfScores){
	int i, sum = 0;
	for(i = 0; i < length; i++){
		sum += golfScores[i];
	}
	return (float) sum/length;
}

int main(void){

	int golfScores[10];
	int length = fillArray(golfScores);
	displayArray(length, golfScores);
	cout << " average: " << getAverage(length, golfScores);

return 0;
}
