#include <iostream>
#include <vector>



struct Object
{
    virtual std::string print() const=0;
};


struct ConsoleObject : public Object{virtual std::string print() const=0;};
struct ConsoleLine : public ConsoleObject{std::string print() const{return "Console Line";}};
struct ConsoleText : public ConsoleObject{std::string print() const{return "Console Text";}};

struct GuiObject : public Object{virtual std::string print() const=0;};
struct GuiLine : public GuiObject{std::string print() const{return "Gui Line";}};
struct GuiText : public GuiObject{std::string print() const{return "Gui Text";}};

int main()
{
    std::vector<Object*> objs;
    ConsoleObject* console0=new ConsoleLine();
    ConsoleObject* console1=new ConsoleText();
    GuiObject* gui0=new GuiLine();
    GuiObject* gui1=new GuiText();
    objs.push_back(console0); objs.push_back(console1);
    objs.push_back(gui0); objs.push_back(gui1);
    for(unsigned i=0; i !=objs.size();i++)
        std::cout<<objs[i]->print()<<",";
}
