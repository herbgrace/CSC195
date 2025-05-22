#include "Bird.h"

void Bird::read(ostream& ostream, istream& istream) {
	Animal::read(ostream, istream);

	ostream << endl << "Enter wingspan: ";
	istream >> m_wingspan;
}

void Bird::write(ostream& ostream) {
	Animal::write(ostream);

	ostream << "Wingspan: " << m_wingspan << endl;
}