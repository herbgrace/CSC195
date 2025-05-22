#pragma once
#include "Animal.h"

class Cat : public Animal {
public:
	void read(ostream& ostream, istream& istream) override;
	void write(ostream& ostream) override;

	eType getType() override { return eType::CAT; }

protected:
	string m_breed = "";
};

