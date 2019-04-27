#include<stdio.h>
#include<iostream>


int main(){ 

  char A[] = {1,2,3,4,5,6,7,8,9};
  char a = '1';

  std::cout << "*((short*)A + 1) = " << *((short*)A + 1 ) << std::endl; 
  std::cout << "*((short*)A + 2) = " << *((short*)A + 2 ) << std::endl; 
  std::cout << "*((int *)A) = " << *((int *)A) << std::endl; 
  std::cout << "*((int *)A + 1) = " << *((int *)A + 1) << std::endl; 
  std::cout << "(int) a = " << (int) a << std::endl; 

}
