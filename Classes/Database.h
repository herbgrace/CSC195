#pragma once
#include "Animal.h"
#include <vector>
using namespace std;

class Database {
public:
	~Database(); // Destructor
	void create(Animal::eType type);
	void displayAll();
	void display(const string& name);
	void display(Animal::eType type);

private:
	vector<Animal*> m_animals;
};