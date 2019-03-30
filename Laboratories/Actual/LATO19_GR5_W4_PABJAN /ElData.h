#ifndef ELData_h
#define ELData_h

#include "Visitor.h"
#include "Data.h"

// wizytowalny kontener na liczbe typu int
class IntData : public Data {

public:

  IntData( int intValue ) : _intValue( intValue ){}
 
  // zmienia zawartosc kontenera
  inline void operator<<( int intValue ) { _intValue = intValue; }
 
 
  // zawartosc kontenera
  inline int getInt() const { return _intValue; }
  
  void acceptVisitor( Visitor& v) { v.visit( this ); };


private:

  int _intValue;
};

// see IntData
class FloatData : public Data {

  public:


    FloatData( float floatValue ) : _floatValue( floatValue ){}

    // zmienia zawartosc kontenera
    inline void operator<<( float floatValue ) { _floatValue = floatValue; }

    // zawartosc kontenera
    inline float getFloat() const { return _floatValue; }


    void acceptVisitor( Visitor& v) { v.visit( this ); };


  private:

    float _floatValue; 
};

#endif
