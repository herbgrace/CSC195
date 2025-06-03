#include <iostream>
#include "Point.h"
using namespace std;


void print(int x) { cout << x << endl; }
void print(float x) { cout << x << endl; }
void print(bool x) { cout << x << endl; }

// Ambiguous Overloads
//bool print(bool x) { cout << x << endl; return true; }
//void print(bool& x) { cout << x << endl; }
//void print(int x) { cout << x * x << endl; } Not an error per se, but not good practice to have different functions

// p1 = left side, p2 = right side


int main() {
	cout << "----- Function Overloads -----" << endl;
	print(1);
	print(2.5f);
	print(true);

	cout << endl << "----- Operator Overloads -----" << endl;
	ost::Point point1(10,14); // Need the custom made namespace to determine which Point
	ost::Point point2(5, 8);
	ost::Point point3;

	// point1.add(point2);
	point3 = point1 + point2;

	//point1.write(cout);
	//point2.write(cout);
	//cout << point1;
	//cout << point2;
	point1 << cout;
	point2 << cout;
	point3 << cout;
}