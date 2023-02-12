/*
Author: Saraya Weerasinghe
Course: CSCI-135
Instructor: Gennadiy Maryash
Assignment: LAB 2C

The user inputs an index and and a value and that value will replace anything in that index. If a user inputs an incorrect index, then the program will tell them that they didnt put the right index.
*/


#include <iostream>


int main() {
  int myData[10];
  for (int i = 0; i < 10; i++) {
    myData[i] = 1;
  }
  do {
    for (int i = 0; i < 10; i++) {
      std::cout << myData[i] << " ";
    }
    std::cout << std::endl;
    int index;
    int new_value;
    std::cin >> index >> new_value;
    if (index < 10 && index >= 0) {
      myData[index] = new_value;
    } else {
     std:: cout << "Invalid index" << std::endl;
      break;
    }
  } while (true);
  return 0;
}
