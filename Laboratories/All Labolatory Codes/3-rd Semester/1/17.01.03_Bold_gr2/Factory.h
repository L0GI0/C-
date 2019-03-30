#ifndef FACTORY_H
#define FACTORY_H

class TestObj {
private:
	const char* _s;
public:
	TestObj(): _s("domniemany") {std::cout << "TestObj::TestObj z arg char: domniemany\n";}
	TestObj(const char* s): _s(s) {std::cout << "TestObj::TestObj z arg char: " << _s << "\n";}
	TestObj(const TestObj& copy): _s(copy._s) { std::cout << "TestObj::TestObj z arg TestObj: " << _s << "\n"; }
	~TestObj() {std::cout << "TestObj::~TestObj " << _s << std::endl;}
	const char* name() const { return _s; }
};

class Factory
{
private:
	static const char* _proto;
	static TestObj* _protoObj;
	static TestObj** _objects;
	static int _countObjects;
public:
	// Factory();
	// ~Factory();
	static TestObj* produce();
	static void prototype(TestObj& prototype);
	static void erase();
};

#endif