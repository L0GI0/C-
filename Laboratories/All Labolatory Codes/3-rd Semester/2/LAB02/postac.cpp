#include "postac.h"
Postac::Postac(std::string  n_name):Osoba(n_name){
  
}
void Postac::PrzedstawSie() {
  if(dynamic_cast<Pilot *>(this)!=NULL){
    std::cout<<"Nazywam sie "<<imie<<" jestem pilotem"<<std::endl;
  }
  else if(dynamic_cast<Kurier *>(this)!=NULL){
    std::cout<<"Nazywam sie "<<imie<<" jestem chlopcem na posylki"<<std::endl;
  }
  else{
    std::cout<<"Nazywam sie "<<imie<<std::endl;
  
  }
}