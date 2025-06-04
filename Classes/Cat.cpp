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

void Cat::read(ifstream& istream) {
	istream >> m_name;
	istream >> m_age;
	istream >> m_breed;
}

void Cat::write(ofstream& ostream) {
	ostream << m_name << endl;
	ostream << m_age << endl;
	ostream << m_breed << endl;
}