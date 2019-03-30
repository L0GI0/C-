#include"Main.h"

#include<iostream>

#define ARRAY_SIZE 10

int main (){
  int**array = new int* [10];
  int value = 1000;
  for (int i = 0; i < ARRAY_SIZE; ++i)
    array[i] = new int [10];
  for(int i = 0; i < 10; i++){
  	array[0][i] = value++;
  }
  PrintArray(array, ARRAY_SIZE);
  PrintArray(array, ARRAY_SIZE);
 for(int i = 0 ; i < ARRAY_SIZE; i++)
 	delete [] array[i];
 delete[] array;
  return 0;
}
