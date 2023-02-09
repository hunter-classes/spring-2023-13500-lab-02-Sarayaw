/*
Author: Saraya Weerasinghe
Course: CSCI-135
Instructor: Gennadiy Maryash
Assignment: LAB 2 A
*** asks the user to input an integer between 0 and 100 and program will square it if given the correct number, if not program will ask them to do it again ***
*/

#include <iostream>
using namespace std;

int main ()
{
int num; 
cout << "Input a number between 0 and 100: ";
cin >> num;

  while (num < 0 || num > 100){

     cout << "Please re-enter: ";
    cin >> num;
    }
     cout << "The square of that number is " << num * num;
    
} 
