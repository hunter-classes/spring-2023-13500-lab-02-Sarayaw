/*
Author: Saraya Weerasinghe
Course: CSCI-135
Instructor: Gennadiy Maryash
Assignment: LAB 2 B
*** Program will print out integers in order including the first number and excluding the last ***
*/
// funcs.cpp
#include <iostream>
#include "funcs.h"

// function prototype
void print_interval(int l, int u);

// function definition
void print_interval(int l, int u) {
int i;
for (i = l; i < u; i++) {
std::cout << i << " ";
}
}
