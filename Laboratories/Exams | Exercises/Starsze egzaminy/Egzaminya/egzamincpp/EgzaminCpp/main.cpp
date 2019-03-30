#include <iostream>
template <typename T = int>
class box
{
public:
	box(T d):dane(d) {}
	void print() { std::cout << "Typ T = " << dane << std::endl; }
	T dane;

};
//template <typename T>
//void box::print()
//{
//	std::cout << "Typ T = " << a << std::endl;
//}
template <>
class box<char>
{
public:
	explicit box(char d):dane(d) {}
	void print() { std::cout << "Typ char = " << dane << std::endl; }
	char dane;
};


int main(){
  
  box<> b1 = -1;
  box<unsigned> b2 = 2;
  box<double> b3 = 2.14;
  box<char> b4 = box<char>('C');
  //odkomentowanie ponizszej linijki bedzie sygnalizowac blad, C w ASCII = 67
  //box<char> b5 = 'C';
  b1.print(); //Wypisuje: Typ T = -1
  b2.print(); //Wypisuje: Typ T = 2;
  b3.print(); //WYpisuje: Typ T = 2.14;
  b4.print(); //Wypisuje: Typ char = 67;
} 
