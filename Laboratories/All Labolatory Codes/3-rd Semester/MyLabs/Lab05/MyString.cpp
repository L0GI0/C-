#include <iostream>
#include <cstring>
#include "main.h"

using namespace std;
MyString::MyString(const char *str){

	this->str = new char[strlen(str) + 1];
	strcpy(this->str, str);
	this->lenghtStr = strlen(str);
	cout << "+++ Create: " << this->str << endl;
}

char * MyString::c_str() const{
	return this->str;
}

void MyString::append(const MyString & strObject){
	int newLen = this->lenghtStr + strObject.length();
	char *tempStr = this->str;
	tempStr = new char[lenghtStr];
	strcpy(tempStr, this->str);
	delete [] (this->str);
	this->str = new char[newLen];
	strcpy(this->str, tempStr);
	strcat(this->str, strObject.c_str());
	delete [] tempStr;
}


int MyString::length() const{
	return this->lenghtStr;
}


void MyString::replace(const char *str){
 	
 	this->lenghtStr = strlen(str) + 1;
 	delete[] this->str;
 	this->str = new char[this->lenghtStr];
 	strcpy(this->str, str);
 	
}

void MyString::swap(MyString & strObject){
	char *tempString = new char[this->lenghtStr];
	strcpy(tempString, this->str);
	this->replace(strObject.c_str());
	strObject.replace(tempString);
	delete[] tempString;
}
	MyString::~MyString(){
		cout << "--- Delete : " << str << endl; 
		delete [] str;
	}
