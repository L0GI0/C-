#pragma once

#include<iostream>

void PrintArray(int** array, const int size)
{
  std::cout<<array[0][0];
  int index = 1;
  while (index < size)
    std::cout<<", "<<array[0][index++];
  std::cout<<"\n";
}
