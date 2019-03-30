/*Sorting contributors with respect to donated amount, reading structure from a file, 1st 
value is number of contributors which is used to create dynnamic array */
#include <iostream>

#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

struct contributor{
	string name;
	double contribution;
};

int main(void){

	int numberOfContributors, i;
	char checkGrand, checkOthers;
	checkGrand = checkOthers = 0;
	ifstream file;
	file.open("text_file.txt");
	if(!file.is_open()){
		cerr << "Cant open a file\n";
		exit(EXIT_FAILURE);
	}
	file >> numberOfContributors;
	file.ignore();
	contributor *donators = new contributor[numberOfContributors];
	for(i = 0; i < numberOfContributors; i++){
		getline(file, donators[i].name);
		file >> donators[i].contribution;
		if(donators[i].contribution >= 10000)
			checkGrand = 1;
		else checkOthers = 1;
		file.ignore();
	}
	cout << "Grand Donators: \n";
	if(checkGrand == 0)
		cout << "none";
	else for(i = 0; i < numberOfContributors; i++){
		if(donators[i].contribution >= 10000)
			cout << donators[i].name << " donated " << donators[i].contribution << "$" << endl;
	}
	cout << "\nDonators: \n";
	if(checkOthers == 0)
		cout << "none";
	else for(i = 0; i < numberOfContributors; i++){
		if(donators[i].contribution < 10000)
			cout << donators[i].name << " donated " << donators[i].contribution << "$" << endl;
	} 

return 0;

}