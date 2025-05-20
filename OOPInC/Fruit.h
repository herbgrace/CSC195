#pragma once
#include "Food.h"

class Fruit : public Food
{
public:
	Fruit(int calories, int numSeeds) : Food(calories) {
		numOfSeeds = numSeeds;
	}

	void consume() override;

protected:
	int numOfSeeds;
};