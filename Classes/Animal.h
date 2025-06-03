#pragma once
#include <string>
#include <iostream>
using namespace std;

class Animal {
public:
	friend std::istream& operator >> (std::istream& istream, Animal& animal);
	friend std::ostream& operator << (std::ostream& ostream, Animal& animal);

	enum class eType {
		CAT = 1,
		BIRD
	};

	string getName() { return m_name; }
	virtual eType getType() = 0;

	virtual void read(ostream& ostream, istream& istream);
	virtual void write(ostream& ostream);
	virtual void read(ifstream& istream);
	virtual void write(ofstream& ostream);

protected:
	string m_name = "";
	int m_age = 0;
};