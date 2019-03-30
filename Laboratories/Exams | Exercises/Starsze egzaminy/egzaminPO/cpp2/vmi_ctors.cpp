#include <iostream>

using namespace std;

/* Scenariusz #0 - "oczywista oczywistosc"
struct A                      { A(char init_from = 'S')    {cout << "A. init_from == " << init_from << endl;}};
struct B : public         A   { B(char init_from) : A('B') {cout << "B. init_from == " << init_from << endl;}};
struct C : public         A   { C(char init_from) : A('C') {cout << "C. init_from == " << init_from << endl;}};
struct D : public B, public C { D() : B('D'), C('D')       {cout << "D." << endl;}};
//*/

/* Scenariusz #1 - "nie ma takiego wywolywania", czyli 2x "error: type 'A' is not a direct base of 'D'"
struct A                      { A(char init_from = 'S')    {cout << "A. init_from == " << init_from << endl;}};
struct B : public         A   { B(char init_from) : A('B') {cout << "B. init_from == " << init_from << endl;}};
struct C : public         A   { C(char init_from) : A('C') {cout << "C. init_from == " << init_from << endl;}};
struct D : public B, public C { D() : B('D'), C('D'), B::A('D'), C::A('D') {cout << "D." << endl;}};
//*/

/* Scenariusz #2 - init from self (domyslny ctor)
struct A                      { A(char init_from = 'S')    {cout << "A. init_from == " << init_from << endl;}};
struct B : public virtual A   { B(char init_from) : A('B') {cout << "B. init_from == " << init_from << endl;}};
struct C : public virtual A   { C(char init_from) : A('C') {cout << "C. init_from == " << init_from << endl;}};
struct D : public B, public C { D() : B('D'), C('D')       {cout << "D." << endl;}};
//*/

/* Scenariusz #3 - blad kompilacji - brak jawnego wywolania konstruktora A a A nie ma domyslnego ctora
struct A                      { A(char init_from)          {cout << "A. init_from == " << init_from << endl;}};
struct B : public virtual A   { B(char init_from) : A('B') {cout << "B. init_from == " << init_from << endl;}};
struct C : public virtual A   { C(char init_from) : A('C') {cout << "C. init_from == " << init_from << endl;}};
struct D : public B, public C { D() : B('D'), C('D')       {cout << "D." << endl;}};
//*/

/* Scenariusz #4 - "cukier w normie" 
struct A                      { A(char init_from)            {cout << "A. init_from == " << init_from << endl;}};
struct B : public virtual A   { B(char init_from) : A('B')   {cout << "B. init_from == " << init_from << endl;}};
struct C : public virtual A   { C(char init_from) : A('C')   {cout << "C. init_from == " << init_from << endl;}};
struct D : public B, public C { D() : B('D'), C('D'), A('D') {cout << "D." << endl;}};
//*/

/* Scenariusz #5 - tu tez trzeba 
struct A                      { A(char init_from)            {cout << "A. init_from == " << init_from << endl;}};
struct B : public         A   { B(char init_from) : A('B')   {cout << "B. init_from == " << init_from << endl;}};
struct C : public virtual A   { C(char init_from) : A('C')   {cout << "C. init_from == " << init_from << endl;}};
struct D : public B, public C { D() : B('D'), C('D'), A('D') {cout << "D." << endl;}};
//*/

/* Scenariusz #6 - TUTAJ TEZ!!
struct A                      { A(char init_from)             {cout << "A. init_from == " << init_from << endl;}};
struct B : public virtual A   { B(char init_from) : A('B')    {cout << "B. init_from == " << init_from << endl;}};
struct C : public virtual A   { C(char init_from) : A('C')    {cout << "C. init_from == " << init_from << endl;}};
struct d : public B, public C { d(char init_from) : B('d'), C('d'), A('d') {cout << "d. init_from == " << init_from << endl;}};
struct D : public d           { D() : d('D'), A('D') {cout << "D." << endl;}};
#define SCENARIUSZ_6
//*/

int main() {
	#ifdef SCENARIUSZ_6
		d test_('m');//do scenariusza #6
		cout << endl;
	#endif
	D test;
}

