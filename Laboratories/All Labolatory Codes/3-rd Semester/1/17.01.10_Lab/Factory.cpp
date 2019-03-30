#include <iostream>
#include "TestObj.h"
#include "Factory.h"

TestObj* Factory::_proto = NULL;
TestObj** Factory::_objects = NULL;
int Factory::_objectsCounter = 0;

TestObj* Factory::produce() {
	TestObj** oldObjects = _objects;
	_objects = new TestObj*[_objectsCounter+1];
	for (int i=0; i< _objectsCounter; ++i)
		_objects[i] = oldObjects[i];
	if (_proto)
		_objects[_objectsCounter] = new TestObj(*_proto);
	else
		_objects[_objectsCounter] = new TestObj();
	if (_objectsCounter)
		delete[] oldObjects;

	return _objects[_objectsCounter++];
}

void Factory::prototype(const TestObj& prototype) {
	if (_proto)
		delete _proto;
	_proto = new TestObj(prototype);
}

void Factory::erase() {
	for (int i=0; i < _objectsCounter; ++i)
		delete _objects[i];
	delete[] _objects;
	if (_proto)
		delete _proto;
}
