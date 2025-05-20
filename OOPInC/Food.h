#pragma once
#include <iostream>
using namespace std;

class Food {
public:
	// Constructor w/o parameters
	// Allocating memory for data members
	// Initializing data members with a default value
	// If we don't create one manually, one is created for us
	Food() {
		m_calories = 0;
		m_pointer = new int(35);
	}
	// Food() : m_calories(0) {}
	// Another method of passing default values (One step instead of two, so faster)

	// Constructor w/ parameters
	Food(int calories) {
		setCalories(calories);
	}
	// Food(int calories) : m_calories(calories) {}

	~Food() {
		delete m_pointer;
	} 
	// Default Destructor
	// Deallocates memory when instance is no longer being used

	void virtual consume() = 0;
	// Pure Virtual function = interface method (children must override)
	// Class is abstract if it has at least one pure virtual function
	int getCalories() { return m_calories; }
	void setCalories(int calories) { m_calories = calories; }

protected:
	int m_calories;
	int* m_pointer; 
};