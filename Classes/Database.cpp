#include "Database.h"
#include "Bird.h"
#include "Cat.h"

//Database::~Database() {
//	for (auto& animal : m_animals) {
//		delete animal;
//	}
//}

void Database::add(Animal::eType type) {
	unique_ptr<Animal> animal = create(type);

	cin >> *animal;
	m_animals.push_back(std::move(animal));
}

unique_ptr<Animal> Database::create(Animal::eType type) {
	unique_ptr<Animal> animal = nullptr;

	switch (type)
	{
	case Animal::eType::BIRD:
		animal = make_unique<Bird>();
		break;
	case Animal::eType::CAT:
		animal = make_unique<Cat>();
	default:
		break;
	}

	return animal;
}

void Database::displayAll() {
	for (const auto& animal : m_animals) {
		cout << endl;
		cout << *animal;
	}
}

void Database::display(const string& name) {
	for (const auto& animal : m_animals) {
		if (animal->getName() == name) {
			cout << endl;
			cout << *animal;
		}
	}
	cout << endl;
}

void Database::display(Animal::eType type) {
	for (const auto& animal : m_animals) {
		if (animal->getType() == type) {
			cout << endl;
			cout << *animal;
		}
	}
	cout << endl;
}

void Database::load(const std::string& filename)
{
	ifstream input(filename);
	if (input.is_open())
	{
		m_animals.clear();
			while (!input.eof())
			{
				int type = 0;
				input >> type;
				unique_ptr<Animal> animal = create(static_cast<Animal::eType>(type));
				if (!animal) continue;
				animal->read(input);
				m_animals.push_back(std::move(animal));
			}
	}
}

void Database::save(const std::string& filename)
{
	std::ofstream output(filename);
	if (output.is_open())
	{
		for (const auto& animal : m_animals)
		{
			int type = 0;
			switch (animal->getType()) {
			case Animal::eType::CAT:
				type = 1;
				break;
			case Animal::eType::BIRD:
				type = 2;
				break;
			default:
				break;
			}
			output << type << endl;
			animal->write(output);
		}
	}
}