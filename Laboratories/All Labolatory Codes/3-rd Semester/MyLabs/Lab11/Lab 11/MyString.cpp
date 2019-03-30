#include "MyString.h"


MyString::MyString(const char *message){
	if(strlen(message) == 0){
		_length = 1;
		return;
	}
	_length = std::strlen(message);
	_str = new char[_length + 1];
	std::strcpy(_str, message);
}

bool MyString::operator==(const MyString & toCompare)const{
	if(!(strcmp(_str, toCompare._str))){
		return true;
	}
	else {
		return false;
	}
};

void MyString::Print(){
	std::cout << _str << std::endl;
};

MyString MyString::operator+(const MyString &toAdd)const{
	MyString tmp;
	tmp._length = _length + strlen(toAdd._str) + 1;
	tmp._str = new char[tmp._length];
	strcat(tmp._str, _str);
	strcat(tmp._str, toAdd._str);
	return tmp;
}

// MyString MyString::operator+(const  char *message)const{
// 	MyString tmp("tekst");
// 	tmp._length = _length + std::strlen(message) + 1;
// 	tmp._str = new char[tmp._length];
// 	strcat(tmp._str, _str);
// 	strcat(tmp._str, message);
// 	return tmp;
// }


MyString & MyString::operator=(MyString & toAssign){
	if(this != &toAssign){
		delete[] _str;
		_length = toAssign._length;
		_str = toAssign._str;
	}
	return (*this);
}

char & MyString::operator[](int index){
	return *(_str + index); 
};

ostream &operator<<(ostream &o, MyString & toPrint){
	o << toPrint._str;
	return o;
}



MyString MyString::operator*(int value)const{
	MyString tmp;
	tmp._length = _length * value; 
	tmp._str = new char[tmp._length];
	for(int i = 0; i < _length; i++)
		strcat(tmp._str, _str);
	return tmp;
};


MyString::MyString(const char message){
	_length = 2;
	_str = new char[_length ];
	_str[0] = message;
	_str[1] = '\0';
}


MyString operator*(int value, const MyString &toMultiply){
	MyString tmp;
	tmp._length = toMultiply._length * value;
	tmp._str = new char[tmp._length];
	for(int i = 0; i < value; i++)
		strcat(tmp._str, toMultiply._str);
	return tmp;
};

MyString::~MyString(){
	delete[] _str;
}
