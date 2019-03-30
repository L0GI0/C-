/*reads text file puts it's contents on the screen and 
counts number of chracters meanwhile  */
#include <iostream>

#include <string>
#include <fstream>
#include <cstdlib>


using namespace std;


int main(void){

char fileName[31], ch;
int charactersNumber = 0;
cout << "Please enter name of file you want to read \n";
cin >> fileName;
ifstream file; 
file.open(fileName);
if(!file.is_open()){
	cout << "Cant open a file\n";
	exit(EXIT_FAILURE);
};

while((ch = file.get()) != EOF){
	cout << ch;
	charactersNumber++;
}

cout << "\nThis file containts " << charactersNumber << " characters\n";

file.close();


return 0;

}