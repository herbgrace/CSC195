#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

/* Multi-Line comments = instructions from assignment */
// Single line comments = my response to questionss

void Square(int& number) {
	number *= number;
}

void Double(int* number) {
	*number *= 2;
}

int main()
{
	/* ** REFERENCE **
	
	declare an int variable and set the value to some number (less than 10)
	declare a int reference and set it to the int variable above */
	int num = 4;
	int& numR = num;

	/* output the int variable */
	cout << num << endl;

	/* set the int reference to some number
	output the int variable
	what happened to the int variable when the reference was changed? (insert answer) */
	numR = 7;
	cout << num << endl;
	// The int variable was also changed when the reference was changed.
	 
	/* output the address of the int variable
	output the address of the int reference
	are the addresses the same or different? (insert answer) */
	cout << &num << endl;
	cout << &numR << endl;
	// The addresess are the same, which makes sense since the reference has the same point in memory as the int.
	 

	/* ** REFERENCE PARAMETER **
	
	create a function above main() called Square that takes in an int parameter
	in the function, multiply the int parameter by itself and assign it back to the parameter(i = i * i)
	call the Square function with the int variable created in the REFERENCE section */
	Square(num);
	 
	/* output the int variable to the console */
	cout << num << endl;
	 
	/* !!notice how the variable has not changed, this is because we only passed the value to the function !!
	change the Square function to take a int reference
	!! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	!! when a function takes a reference parameter, any changes to the parameter changes the calling variable "" */


	/* ** POINTER VARIABLE **
	
	declare an int pointer, set it to nullptr (it points to nothing)
	set the int pointer to the address of the int variable created in the REFERENCE section */
	int* numPoint = nullptr;
	numPoint = &num;
	 
	/* output the value of the pointer
	what is this address that the pointer is pointing to? (insert answer)
	output the value of the object the pointer is pointing to (dereference the pointer) */
	cout << numPoint << endl;
	// 000000DC3E4FFCF4, the exact same as the address of num
	cout << *numPoint << endl;
	 

	/* ** POINTER PARAMETER **
	
	create a function above main() called Double that takes in an int pointer parameter
	in the function, multiply the int pointer parameter by 2 and assign it back to the parameter(i = i * 2)
	!! make sure to dereference the pointer to set the value and not set the address !!
	call the Double function with the pointer created in the POINTER VARIABLE section */
	Double(numPoint);
	 
	/* output the dereference pointer
	output the int variable created in the REFERENCE section
	did the int variable's value change when using the pointer? */
	cout << *numPoint << endl;
	cout << num << endl;
	// The int variable's value did change when using the pointer,
	// since the only thing the pointer does is show where num is at in memory.
}