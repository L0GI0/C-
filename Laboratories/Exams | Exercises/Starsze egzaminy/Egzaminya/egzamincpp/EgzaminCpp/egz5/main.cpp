#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Object
{
	public :
		Object() {}
		virtual string print() const = 0;
};

class ConsoleObject : public Object
{
	public :
		ConsoleObject() {}
		virtual string print() const { return "a"; }
};

class ConsoleLine : public ConsoleObject
{
	public :
		ConsoleLine() {}
		string print() const { return "ConsoleLine"; }
};

class ConsoleText : public ConsoleObject
{
	public :
		ConsoleText() {}
		string print() const { return "ConsoleText"; }
};

class GuiObject : public Object
{
	public :
		GuiObject() {}
		virtual string print() const { return ""; }
};

class GuiLine : public GuiObject
{
	public :
		GuiLine() {}
		string print() const { return "GuiLine"; }
};

class GuiText : public GuiObject
{
	public :
		GuiText () {}
		string print() const {return "GuiText"; }
};

// UZUPEŁNIJ /\

int main()
{
	std::vector<Object*> objs;
	ConsoleObject* console0 = new ConsoleLine();
	ConsoleObject* console1 = new ConsoleText();
	GuiObject* gui0 = new GuiLine();
	GuiObject* gui1 = new GuiText();
	objs.push_back(console0); objs.push_back(console1);
	objs.push_back(gui0); objs.push_back(gui1);
	for(unsigned i=0; i !=objs.size();i++)
		cout << objs[i]->print() << ",";
	return 0;
}

//wynik działania:
//Console Line,Console Text,Gui Line,Gui Text,

