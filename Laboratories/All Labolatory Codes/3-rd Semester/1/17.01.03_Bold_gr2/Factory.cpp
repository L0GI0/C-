#include <iostream>
#include "Factory.h"

const char* Factory::_proto = "domniemany";
TestObj* Factory::_protoObj = NULL;
TestObj** Factory::_objects = NULL;
int Factory::_countObjects = 0;

TestObj* Factory::produce() {
	TestObj** oldObjects = _objects;
	_objects = new TestObj*[_countObjects+1];
	for (int i=0; i<_countObjects; ++i)
		_objects[i] = oldObjects[i];
	if (_protoObj)
		_objects[_countObjects++] = new TestObj(*_protoObj);
	else
		_objects[_countObjects++] = new TestObj(_proto);
	if (_countObjects > 1)
		delete[] oldObjects;

	return _objects[_countObjects-1];
}

void Factory::prototype(TestObj& prototype) { 
	if (_protoObj)
		delete _protoObj;
	_protoObj = new TestObj(prototype);
}

void Factory::erase() {
	for (int i=0; i < _countObjects; ++i)
		delete _objects[i];
	delete[] _objects;
	if (_protoObj)
		delete _protoObj;
}