#include <iostream>
#include <array>
#include <list>
using namespace std;

int main() {
    // Static array
    // Needs to be declared with the length
    int n1[5]; // Has 'random' default values
    int n2[5] = {}; // Defaults values to 0
    int n3[4] = { 4, 5, 6, 7 }; // Sets the values to what is inputted
    int n4[] = { 4, 5, 6, 7 }; // Sets the values and length to what is inputted

    // C Style strings
    char c1[] = "hello";
    // char c2[5] = "world"; ERROR (needs null terminator at the end)

    //      CODE FROM IN CLASS:
    // ---------------------------
    
    // using built-in array
    cout << "Built in Array: " << endl;
    int numbers[5] = { 1,2,3,4,5 };

    cout << "Third Element: " << numbers[2] << endl;
    // Undefined behavior, no check for out of bounds
    cout << "Out of Bound Element: " << numbers[7] << endl; 
    numbers[1] = 25;

    cout << "All Elements: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << (i + 1) << ": " << numbers[i] << endl;
    }

    int size = sizeof(numbers) / sizeof(int); // Size of array / 4 = how many elements there are
    // numbers.size() -- limited functionality of built-in array (No Length function)

    cout << "Address of First Element: " << numbers << endl;
    // Fixed length at compile-time, no built-in methods for common operations, fast access to elements, easy to setup


    // STL Array
    cout << endl << "STL Array: " << endl;
    std::array<string, 4> animals = {"Mouse", "Tiger", "Snake", "Penguin"}; // std is not necessary when including namespace
    
    cout << "Third Element: " << animals[2] << endl;
    cout << "Size of Array: " << animals.size() << endl; // Many built-in methods

    // Iterating through array with for each
    cout << "All Elements: ";
    for (string ani : animals) {
        cout << ani << " ";
    }
    cout << endl;

    // cout << "Out of Bound Element: " << animals[7] << endl; -- Throws an error for out of bounds array

    // cout << "Last Element: " << animals.end() << endl;
    // Fixed size with STL algorithm compatability
    // Out of bounds exceptions

    // 4 Container Types:
    // Sequence Containers (Array, Vector, Deque, Forward_list, List)
    // Sequence Container Adapters (Stack LIFO, Queue LIFO, Priority_queue)
    // Associative Containers (set, multiset, map, multimap)
    // Unordered Assoviative Containers (unordered_set, unordered_multiset, unordered_map, unordered_multimap)

    // STL List
    cout << endl << "STL List: " << endl;
    list<float> height = { 5.6f, 6.2f, 4.2f };

    // height[0] Since not in order, does not like indexes
    cout << "Size of list: " << height.size() << endl;

    height.push_front(2.3f); // Adds 2.3 to the front
    height.push_back(7.3f); // Adds 7.3 to the back

    height.sort(); // Sorts the list

    // Iterate through list (Need to use for each)
    cout << "All Elements: ";
    for (float hei : height) {
        cout << hei << " ";
    }
    cout << endl;

    // Resizable container - helpful for frequent and efficient insertion & deletion
    // Higher memory overhead (8 total bytes for previous and next pointers)
    // Works well with iterators and otherSTL compatibility
}