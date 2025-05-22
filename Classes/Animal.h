#pragma once
#include <string>
#include <iostream>
using namespace std;

class Animal {
public:
	enum class eType {
		CAT = 1,
		BIRD
	};

	string getName() { return m_name; }
	virtual eType getType() = 0;

	virtual void read(ostream& ostream, istream& istream);
	virtual void write(ostream& ostream);

protected:
	string m_name = "";
	int m_age = 0;
};