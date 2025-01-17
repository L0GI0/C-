#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

class Object
{
	public :
		string text;
};

class PrintableObject :public Object
{
	public :
		void print() const { cout << text << endl; }
};

class PrintableText :public PrintableObject
{
	public :
		PrintableText(const string str = "") { text = str; }
};

class DrawableObject :public Object
{
	public :
		void draw() const { cout << text << endl; }
};

class DrawableText :public DrawableObject
{
	public :
		DrawableText(const string str = "") { text = str; }
};


int main()
{
	vector<Object *> vec; vec.reserve(3);  //uzupełnić po pierwszym średniku !
	vec.push_back(new PrintableText("PrintableText 1"));
	vec.push_back(new DrawableText("DrawableText 1"));
	vec.push_back(new Object());
	const PrintableObject* po1 = static_cast<PrintableObject*>(vec[0]);
	const DrawableObject& do1 = static_cast<DrawableObject&>(*vec[1]);
	po1->print();
	do1.draw();

	//to ma nie dziaÂ ł aĂŚ:
	//vec[0]->print();
	//vec[1]->draw();
	//uzpuelnic #5
	delete vec[0];
	delete vec[1];
	delete vec[2];

}
	//na wyjÂ ściu ma byĂŚ:
	//
	//print() : PrintableText 1
	//
	//draw() : DrawableText 1

