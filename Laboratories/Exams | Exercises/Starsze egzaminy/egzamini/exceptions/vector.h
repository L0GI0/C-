/*
** Olivia 
** 14.02.2011
** Vector
*/
#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include "exception.h"

template <typename T>
class Vector {
public:
  Vector(int poj = 10): pojemnosc(poj), rozmiar(0) {
    tab = new T[pojemnosc];
  }
  
  Vector(const Vector<T>& o) {
    if (&o == this) return;
    tab = new T[o.pojemnosc];
    pojemnosc = o.pojemnosc;
    rozmiar = o.rozmiar;
    for(int i = 0; i < rozmiar; ++i) {
     tab[i] = o.tab[i]; 
    }
  }
  
  ~Vector() {
   delete [] tab;
  }
  
  T& operator[](int index) {
    if((index < 0) || (index >= rozmiar)) {
      throw IndexOutOfRange();
    }
    return tab[index];
  }

  void vec_realloc(int nowa_pojemnosc) {
   if(nowa_pojemnosc <= pojemnosc)
    return;
   if(nowa_pojemnosc < 0) 
    ;
    ///rzuc wyjatek;
   T* tmp = new T[nowa_pojemnosc];
   for (int i = 0; i < rozmiar; ++i) {
    tmp[i] = tab[i];
   }
   pojemnosc = nowa_pojemnosc;
   delete [] tab;
   tab = tmp;
  }

  T& operator=(const Vector<T>& o) {
    if (pojemnosc < o.pojemnosc) {
      vec_realloc(o.pojemnosc);
    }
    for (int i = 0; i < o.rozmiar; ++i) {
      tab[i] = o.tab[i];
    }
    rozmiar = o.rozmiar;
    return *this;
  }

  unsigned size() const {
    return rozmiar;
  }

  unsigned capacity() const {
    return pojemnosc;
  }

  void push_back(const T& element) {
    if((rozmiar == pojemnosc) || (rozmiar > pojemnosc)) {
      vec_realloc(pojemnosc*2);
    }
    tab[rozmiar] = element;
    rozmiar++;
  }

private:
  T* tab;
  int pojemnosc;
  int rozmiar;
};

#endif /* VECTOR_H */
