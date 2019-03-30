#include <iostream>
#include <vector>
using std::cout;


struct Object
{
	virtual std::string print()const=0;
};

struct ConsoleObject:public Object
{

};
struct ConsoleLine:public ConsoleObject
{
	virtual std::string print()const
	{
		return "Console Line";
	};
};

struct ConsoleText:public ConsoleObject
{
	virtual std::string print()const
	{
		return "Console Text";
	};
};

struct GuiObject:public Object
{

};

struct GuiLine:public GuiObject
{
	virtual std::string print()const
	{
		return "Gui Line";
	};
};

struct GuiText:public GuiObject
{
	virtual std::string print()const
	{
		return "Gui Text";
	};
};

int main()
{
	std::vector<Object*> objs;
	ConsoleObject*console0=new ConsoleLine();
	ConsoleObject*console1=new ConsoleText();
	GuiObject* gui0=new GuiLine();
	GuiObject* gui1=new GuiText();
	objs.push_back(console0); objs.push_back(console1);
	objs.push_back(gui0); objs.push_back(gui1);
	for(unsigned i=0; i !=objs.size();i++)
		cout<<objs[i]->print() <<",";
}
//wynik działania:
//Console Line,Console Text,Gui Line,Gui Text,