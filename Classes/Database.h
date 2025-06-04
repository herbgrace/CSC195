#pragma once
#include "Animal.h"
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

class Database {

public:
	//~Database(); // Destructor
	void add(Animal::eType type);
	void displayAll();
	void display(const string& name);
	void display(Animal::eType type);
	void load(const std::string& filename);
	void save(const std::string& filename);

private:
	unique_ptr<Animal> create(Animal::eType type);
	vector<unique_ptr<Animal>> m_animals;
};