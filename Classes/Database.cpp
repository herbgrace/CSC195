#include "Database.h"
#include "Bird.h"
#include "Cat.h"

Database::~Database() {
	for (Animal* animal : m_animals) {
		delete animal;
	}
}

void Database::create(Animal::eType type) {
	Animal* animal = nullptr;
	switch (type) {
	case Animal::eType::BIRD:
		animal = new Bird;
		break;
	case Animal::eType::CAT:
		animal = new Cat;
		break;
	default:
		break;
	}

	animal->read(cout, cin);
	m_animals.push_back(animal);
}

void Database::displayAll() {
	for (Animal* animal : m_animals) {
		cout << endl;
		animal->write(cout);
	}
}

void Database::display(const string& name) {
	for (Animal* animal : m_animals) {
		if (animal->getName() == name) {
			cout << endl;
			animal->write(cout);
		}
	}
	cout << endl;
}

void Database::display(Animal::eType type) {
	for (Animal* animal : m_animals) {
		if (animal->getType() == type) {
			cout << endl;
			animal->write(cout);
		}
	}
	cout << endl;
}
