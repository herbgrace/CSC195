#include <iostream>
// #include "Sandwich.h"

enum Meat {
    CHICKEN,
    PRAWN,
    PORK,
    TURKEY,
    PASTRAMI,
    BOLOGNE
};

class Sandwich {   // Class default is private, while struct default is public

public:
    std::string bread;
    bool isDelicious;
    Meat meat;
private:
    float price;

public:
    void setPrice(float value) {
        if (value < 0) {
            value = 0;
        }
        price = value;
    }
    void printPrice() {
        std::cout << "The price of the sandwich is $" << price << std::endl;
    }
};

/*
* sandwich.h
* Right click on header files and make file
* Paste class and enum into header file
* Remove body from class methods, keep the declarations however
*
* Create new source file
* Sandwich.cpp
* #include "Sandwich.h"
* Create methods in this file, almost like an abstract method?
*/

int main() {
    // typedef float employeeWage;  -- Traditional C++ way
    using employeeWage = float;  // Modern C++ way
    employeeWage wageButcher = 12.4f;  // Still a float type, but can be updated easily
    employeeWage wageCleaner = 9.2f;
    employeeWage wageChef = 15.8f;

    Sandwich bbq;
    bbq.bread = "Honey Rye";
    // bbq.price = 25.0f -- price is now private
    bbq.setPrice(25.0f);
    bbq.meat = Meat::PORK;
    bbq.isDelicious = true;

    // printPrice(bbq) Procedural Programming = member functions separate from objects
    bbq.printPrice(); // Object Oritented Programming = data members + member functions
}