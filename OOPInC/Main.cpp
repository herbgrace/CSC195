#include <iostream>
#include "Food.h"
#include "Fruit.h"
#include "Vegetable.h"
#include <vector>
using namespace std;

// Encapsulation, Abstraction, Inheritance, Polymorphism

int main() {
	//cout << "----- Food Instance -----" << endl;
	//Food food;

	//food.consume();
	//// food.setCalories(25);
	//cout << "Food Calories: " << food.getCalories() << endl;

	//Food* pFood = &food;
	//pFood->consume();
	//(*pFood).consume();

	// Food is now an abstract class, cannot make an instance of it

	cout << endl << "----- Fruit Instance -----" << endl;
	Fruit apple(20, 13);
	apple.consume();
	cout << "Fruit Calories: " << apple.getCalories() << endl;


	cout << endl << "----- Vegetable Instance -----" << endl;
	Vegetable carrot;
	carrot.consume();
	cout << "Vegetable Calories: " << carrot.getCalories() << endl;

	vector<Food*> foodList = { &apple, &carrot, new Vegetable };
	// She poly my morphism til I vector
}