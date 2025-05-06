// InClassHelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!\n";

    int i = 0;

    cout << i << endl; // Actual variable value
    cout << &i << endl;  // How big the memory address is for this variable?
    cout << sizeof(i) << endl; //How many bytes are used to store this variable
}