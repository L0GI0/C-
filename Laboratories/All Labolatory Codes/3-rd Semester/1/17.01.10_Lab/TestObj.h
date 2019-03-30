#ifndef TESTOBJ_H
#define TESTOBJ_H

/**
* Class TestObj which represents a TestObj with "loud" constructors and destructors and custom name
*/
class TestObj {
public:
	/**
	* Default constructor which makes an object without a name
	*/
	TestObj();
	/**
	* Constructor that makes objects with a specified name
	* \param string name of the object
	*/
	TestObj(const char* string); 
	/**
	* Copying constructor that makes objects based on another object
	* \param toCopy Primary object
	*/
	TestObj(const TestObj& toCopy);
	/**
	* Destructor (specified only to show an info when destroying an object)
	*/
	~TestObj();
	/**
	* Method that returns object's name
	* \return Object's name
	*/
	const char* name() const;
private:
	/**
	* Object's name
	*/
	const char* _name;
};

#endif