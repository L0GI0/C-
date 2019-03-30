/*
** Olivia
** 12.02.2011
*/

#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <iostream>

class IndexOutOfRange: public std::exception {
public:
  const char* what() const throw(){
    return "IndexOutOfRange Exception";
  }
};

#endif /* EXCEPTION_H */

