#ifndef FACTORY_H
#define FACTORY_H
/**
* Class Factory which represents a factory of TestObjs
*/
class Factory {
public:
	/**
	* A method which produces TestObjs 
	*/
	static TestObj* produce();
	/**
	* Method which sets new prototype of produced objects
	* \param prototype New prototype
	*/
	static void prototype(const TestObj& prototype);
	/**
	* Method which erases all created objects
	*/
	static void erase();
private:
	/**
	* Prototype of the objects
	*/
	static TestObj* _proto;
	/**
	* Array of created objects (for erasing purposes only)
	*/
	static TestObj** _objects;
	/**
	* Objects counter (for erasing purposes only)
	*/
	static int _objectsCounter;
};

#endif