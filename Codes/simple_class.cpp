#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Person {
private:
static const int LIMIT = 25;
string lname;
// Person’s last name
char fname[LIMIT]; // Person’s first name
public:
Person() {lname = ""; fname[0] = '\0'; } // #1
Person(const string & ln, const char * fn = "Heyyou"){
	lname = ln;
	strncpy(fname, fn, LIMIT);
}
// the following methods display lname and fname
void Show() const{
	cout << "Name: " << fname << " Last name: " << lname  << endl;
};
// firstname lastname format
void FormalShow() const{ // lastname, firstname format
	cout <<  "Last name: " << lname << " Name: " << fname  << endl;
}
};
int main(void){

	Person one;
	Person two("Pabjan");
	Person three("Pabjan", "Isabel");
	one.Show();
	two.Show();
	three.Show();
	cout << endl;
	two.FormalShow();
	three.FormalShow();
	return 0;
}