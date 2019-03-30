#include <iostream>
#include <cstring>

using namespace std;
class MyString{
public:
	MyString(const char *message = "");
	MyString(const char message);
	bool operator==(const MyString & toCompare)const;
	void Print();
	MyString operator+(const MyString &toAdd)const;
	// MyString operator+(const  char *)const;
	MyString &operator=(MyString & toAssign);
	~MyString();
	MyString operator*(int value)const;
	char &operator[](int index);
	friend ostream &operator<<(ostream &o, MyString & toPrint);
	friend MyString operator*(int value, const MyString &toMultiply);
private:
	char *_str;
	int _length;
};


