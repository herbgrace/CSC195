#include "Cat.h"

void Cat::read(ostream& ostream, istream& istream) {
	Animal::read(ostream, istream);

	ostream << endl << "Enter cat breed: ";
	istream >> m_breed;
}

void Cat::write(ostream& ostream) {
	Animal::write(ostream);

	ostream << "Cat Breed: " << m_breed << endl;
}