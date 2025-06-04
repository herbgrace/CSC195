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

void Bird::read(ifstream& istream) {
	istream >> m_name;
	istream >> m_age;
	istream >> m_wingspan;
}

void Bird::write(ofstream& ostream) {
	ostream << m_name << endl;
	ostream << m_age << endl;
	ostream << m_wingspan << endl;
}