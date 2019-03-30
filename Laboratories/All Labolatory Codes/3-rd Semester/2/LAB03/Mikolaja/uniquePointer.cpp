#include "lab04.h"
#include <iostream>
#include <string>


  UniquePointer::~UniquePointer(){
    if(obj != NULL){
      delete obj;
    }
  }
  UniquePointer::UniquePointer(Object* _obj): obj(_obj){
    
  }
  UniquePointer::UniquePointer(UniquePointer& _uniquePointer):obj(_uniquePointer.get()){
    if(&_uniquePointer != this){
      _uniquePointer.set(NULL);
    }
  }
  void UniquePointer::print() const{
    if(obj == NULL){
      std::cout << "This object does not point to anything" << std::endl;
    } 
    else{
      std::cout << "This is pointer to " << obj->getText() << std::endl;
    }
  }
  Object* UniquePointer::operator->(){
    return obj;
  }
  Object* UniquePointer::get(){
    return obj;
  }
  
  void UniquePointer::set(Object* _obj){
    obj = _obj;
  }
  
  UniquePointer& UniquePointer::operator=(UniquePointer& _uniquePointer){
    if(this == &_uniquePointer){
      return *this;
    }
    obj = _uniquePointer.get();
    _uniquePointer.set(NULL);
    return *this;
  }
  
 UniquePointer& UniquePointer::operator=(Object* _obj){
   if(obj == NULL){
     obj = _obj;
   }
   if(obj != _obj){
     delete obj;
     obj = _obj;
   }
   return *this;
 }