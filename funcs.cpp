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
