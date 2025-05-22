#include "Animal.h"
#include "Bird.h"

void Animal::read(ostream& ostream, istream& istream) {
	ostream << "Enter name: ";
	istream >> m_name;

	ostream << endl << "Enter age: ";
	istream >> m_age;
}

void Animal::write(ostream& ostream) {
	ostream << "Name: " << getName() << endl;
	ostream << "Age: " << m_age << endl;
}
