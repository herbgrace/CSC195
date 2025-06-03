#include <iostream>
#include "Fraction.h"
using namespace std;
using namespace mathlib;

template<typename T>
void operator >> (istream& istream, Fraction<T>& f1)
{
    cout << "Numerator: ";
    istream >> f1.numerator;
    cout << endl << "Denominator: ";
    istream >> f1.denominator;
}

template<typename T>
void operator << (ostream& ostream, Fraction<T> f1)
{
    ostream << f1.numerator << "/" << f1.denominator;
}


int main() {
    Fraction<int> fraction1{ 7, 14 };
    fraction1.simplify();
    cout << fraction1; cout << endl;

    Fraction<int> fraction2{ 15, 6 };
    fraction2.simplify();
    cout << fraction2; cout << endl;

    cout << fraction1; cout << " == "; cout << fraction2; cout << " result: " << (fraction1 == fraction2) << endl;
    cout << fraction1; cout << " > "; cout << fraction2; cout << " result: " << (fraction1 > fraction2) << endl;

    cout << fraction1; cout << " + "; cout << fraction2; cout << " result: "; cout << (fraction1 + fraction2); cout << endl;
    cout << fraction1; cout << " * "; cout << fraction2; cout << " result: "; cout << (fraction1 * fraction2); cout << endl;

    Fraction<float> fraction3;
    cout << "input fraction (numerator - denominator): \n";
    cin >> fraction3;
    cout << fraction3; cout << endl;
    cout << fraction3.toDouble() << endl;
}