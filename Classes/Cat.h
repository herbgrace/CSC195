#pragma once
#include "Animal.h"

class Cat : public Animal {
public:
	void read(ostream& ostream, istream& istream) override;
	void write(ostream& ostream) override;
	virtual void read(ifstream& istream) override;
	virtual void write(ofstream& ostream) override;

	eType getType() override { return eType::CAT; }

protected:
	string m_breed = "";
};

