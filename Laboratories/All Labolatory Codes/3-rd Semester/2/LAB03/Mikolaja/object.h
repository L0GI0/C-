#ifndef _LAB_B
#define _LAB_B

#include <iostream>

/**
 * @brief Klasa do testow uniquePointer. Przechowuje napis
 */
class Object{
public:
  /**
   * @brief Konstruktor 
   * @arg const char* 
   */
  Object(const char* _text):text(_text){std::cout << "Constructing object " << text << std::endl;};
  /**
   * @brief Destruktor
   */
  ~Object(){std::cout << "Destroying object: " << text << std::endl;}
   /**
    * @brief Wypisuje napis
    */
  void print()const{std::cout << "This is " << text << std::endl;}
   /**
    * @brief Zwraca zawartosc pola text
    * @return string
    */
  std::string getText() const{return text;}
private:
  std::string text;
};





#endif