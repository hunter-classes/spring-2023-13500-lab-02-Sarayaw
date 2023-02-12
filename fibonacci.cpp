/*
Author: Saraya Weerasinghe
Course: CSCI-135
Instructor: Gennadiy Maryash
Assignment: LAB 2D

This program  uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).
*/


#include <iostream>


int main() {
  int fib[60];
  fib[0] = 0;
  fib[1] = 1;
  for (int i = 2; i < 60; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  for (int i = 0; i < 60; i++) {
    std::cout << fib[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}
