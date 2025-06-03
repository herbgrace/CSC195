#include "Animal.h"

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

void Animal::read(ifstream& istream) {
	istream >> m_name;
	istream >> m_age;
}

void Animal::write(ofstream& ostream) {
	ostream << m_name << endl;
	ostream << m_age << endl;
}

std::istream& operator>>(istream& istream, Animal& animal)
{
	animal.read(cout, istream);
	return istream;
}

std::ifstream& operator>>(ifstream& istream, Animal& animal)
{
	animal.read(istream);
	return istream;
}

std::ostream& operator<<(ostream& ostream, Animal& animal)
{
	animal.write(ostream);
	return ostream;
}

std::ofstream& operator<<(ofstream& ostream, Animal& animal)
{
	animal.write(ostream);
	return ostream;
}
