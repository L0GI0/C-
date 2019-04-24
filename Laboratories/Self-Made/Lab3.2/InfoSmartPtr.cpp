#include "InfoSmartPtr.h"

InfoSmartPtr::InfoSmartPtr(InfoClass * o):_ptr(o){
}

InfoSmartPtr::~InfoSmartPtr(){
	_ptr->decreasePCount();
	if(((_ptr->getPCount())) == 0)
		delete _ptr;
}


InfoClass & InfoSmartPtr::operator*()const{
	return *_ptr;
}

InfoClass * InfoSmartPtr::operator->()const{
	return _ptr;
}

void InfoSmartPtr::operator=(InfoSmartPtr & tA){
	_ptr->decreasePCount();
	if((_ptr->getPCount()) == 0){
		delete _ptr;
	}
	if(this == &tA){
		return;
	}
	_ptr = tA._ptr;
	_ptr->increasePCount();
}

InfoSmartPtr::InfoSmartPtr(InfoSmartPtr & tC){
	tC._ptr->increasePCount();
	// _ptr->_name = tC._ptr->_name;
	 _ptr = tC._ptr;
}
