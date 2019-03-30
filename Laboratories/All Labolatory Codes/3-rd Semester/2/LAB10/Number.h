#pragma once
#include <iostream>
#include <string>

class Number
{
public:
	Number(const std::string name1, float value1);
	~Number();
	static void SetRange(const int from1, const int to1 );
	static int from;
	static int to;
	static Number* Factory(const std::string name1, float value1);
	void Print();
	///// MEMORY
	static void Add(Number *number);
	static void Destroy();
private:
	std::string name;
	float value;
	///// MEMORY
	static Number **array;
	static int size;

};