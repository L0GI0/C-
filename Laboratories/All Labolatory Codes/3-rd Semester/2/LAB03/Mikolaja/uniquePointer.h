#ifndef _LAB_C
#define _LAB_C

#include <iostream>
#include "object.h"
 /**
  * @brief Klasa UniquePointer - ktora przechowywuje unikatowy wskaznik na obiekt typu Object
  */
class UniquePointer{
public:
   /**
   * @brief Destruktor - dealokuje pamiec zajmowana przez Obiekt
   */
  ~UniquePointer();
   /**
   * @brief Konstruktor - tworzy nowy UniquePointer przechowywujacy Object*
   * @arg Object* 
   */
  UniquePointer(Object* _obj);
  /**
   * @brief Konstruktor kopiujacy - tworzy nowy UniquePointer przechowywujacy Object*
   * @arg Object* 
   */
  UniquePointer(UniquePointer& _uniquePointer);
  /**
   * @brief Wypisuje napis
   */
  void print() const;
  /**
   * @brief Przeciazenie operatora ->
   * @return Object*
   */
  Object* operator->();
  /**
   * @brief Zwraca wskaznik na Object
   * @return Object*
   */
  Object* get();
  /**
   * @brief Ustawia na ktory Object bedzie wskazywal UniquePointer
   * @arg Object*
   */
  void set(Object* _obj);
   /**
   * @brief Przeciazenie operatora = 
   * @arg UniquePointer&
   * @return UniquePointer&
   */
  UniquePointer& operator=(UniquePointer& _uniquePointer);
  /**
   * @brief Przeciazenie operatora = 
   * @arg Object*
   * @return UniquePointer&
   */
  UniquePointer& operator=(Object* _obj);
private:
  Object* obj;
};




#endif