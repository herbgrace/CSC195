#pragma once
#include "Animal.h"

class Bird : public Animal {
public:
	void read(ostream& ostream, istream& istream) override;
	void write(ostream& ostream) override;

	eType getType() override { return eType::BIRD; }

protected:
	float m_wingspan = 0;
};

