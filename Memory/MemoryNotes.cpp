#include <iostream>

using namespace std;

// Passing by value ends up creating copies
// Methods implemented on copy and not original

// Passing by reference is creating an alias for the original
// CANNOT be Null
// Methods implemented on both

// Passing by pointer sends the address of the original
// Always uses 4 bytes of memory to store
// Methods implemented on original only
// (->) deference functionality for class data members

class Dog {
public:
	void lick() {
		cout << "Licked!" << endl;
	}
};

int main() {
	Dog* puppy = new Dog;
	puppy->lick();
	(*puppy).lick();

	// Stack is temporary memory, allocated at compiletime
	// Heap is dynamic memory, allocated at runtime

	// new - new[]
	// Allocates memory for an object or array of objects in heap, returns nonzero pointer
	int* p = new int;

	// delete - delete[]
	// Deallocates a block of memory allocated with the new operator
	delete puppy;
	delete p;
	// Calls the object's destructor before memory is deallocated
		// Any last code before it gets deleted

	// Static memory allocation is memory declared at compile time. Fixed size allocated on the stack
	// Dynamic memory allocation is done at the time of execution. Allocated on the heap.
}