/*
Author: Saraya Weerasinghe
Course: CSCI-135
Instructor: Gennadiy Maryash
Assignment: LAB 2 B
*** Program will print out integers in order including the first number and excluding the last ***
*/
// main.cpp
#include <iostream>
#include "funcs.h"

int main() {
std::cout << "\n Test 1:" <<  std::endl;
print_interval(0, 9);
std::cout << "\n Test 2:" << std::endl;
print_interval(1, 10);
std::cout << "\n Test 3:" << std::endl;
print_interval(2, 11);
  
   return 0;
}
