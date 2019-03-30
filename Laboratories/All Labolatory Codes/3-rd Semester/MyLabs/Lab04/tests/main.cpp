#include <iostream>

using namespace std;

int main(void){

	char *string1 = "jakis randomowy text";
	char *string2 = string1;
	while((*string1) != '\0')
		++string1;
	if(++string1)
		cout << "not null" << endl;
	return 0;
}