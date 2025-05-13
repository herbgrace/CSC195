#include <iostream>

using namespace std;

void set(int& i) { // Passes the variable by reference, will update i1 outside of method
	i = 123;
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapper(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int i1 = 10;
	int i2 = 20;

	// Reference has to be pointing to something, pointer can be pointed to nothing (nullptr)
	int& r = i1; // Makes a new alias for i1, is another pointer to the same spot in memory
	//r = 30;

	int* p = nullptr;
	p = &i2;

	//set(i1);
	//swap(i1, i2);
	swapper(&i1, p);

	cout << "i1: " << i1 << endl;
	cout << "i2: " << i2 << endl;
	cout << "Address i2: " << &i2 << endl;
	cout << "Address r: " << &r << endl;
	cout << "p: " << p << endl;
	cout << "dereference p: " << *p << endl;
	cout << "Address p: " << &p << endl;
}