#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello World!\n";

    //int i = 0;

    //cout << i << endl; // Actual variable value
    //cout << &i << endl;  // How big the memory address is for this variable?
    //cout << sizeof(i) << endl; //How many bytes are used to store this variable

    // Data Type Conversion

    // Implicit Conversion
    // Target data type has the capacity (memory) to store the original value
    short numSht = 5;
    int numInt = numSht;
    cout << numInt << endl;

    // Explicit Conversion
    // Target data type doesn't necessarily have the capacity to store the original value
    double numDbl = 654.345;
    int numIntDbl = (int)numDbl;    // traditional C++ way
    numIntDbl = static_cast<int>(numDbl);   // Modern C++ way + compile time conversion
    cout << numIntDbl << endl;
}