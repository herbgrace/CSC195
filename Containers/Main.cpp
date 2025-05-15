#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>
using namespace std;

void arrayStuff() {
	// Initialize the array
	array<string, 7> days = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	// Prints out how many elements are in the array
	cout << "Number of elements in the array: " << days.size() << endl;
	// Prints out all of the elements in the array
	cout << "Days of the week: ";
	for (string day : days) {
		cout << day << " ";
	}
	cout << endl << endl;
}

void vectorStuff() {
	// Initialize vector
	vector<int> numbers = { 1,2,3,4,5 };

	// Add 2 new numbers to the vector
	numbers.push_back(7);
	numbers.push_back(10);
	// Remove the last element from the vector
	numbers.pop_back();

	// Print the contents of the vector
	cout << "Elements in the vector: ";
	for (int num : numbers) {
		cout << num << " ";
	}
	cout << endl << endl;
}

void listStuff() {
	// Initialize List
	list<string> fruits = { "Apple", "Banana", "Pear" };

	// Add one fruit to front, one to back
	fruits.push_front("Grape");
	fruits.push_back("Pomegranate");

	// Remove one element
	fruits.remove("Banana");

	// Print out each item
	cout << "Stored Fruits: ";
	for (string fruit : fruits) {
		cout << fruit << " ";
	}
	cout << endl << endl;
}

void mapStuff() {
	// Create map
	map<string, int> stock = { { "Apples", 10 }, { "Bananas", 5 }, { "Pears", 20 } };

	// Access and update a value
	stock.at("Pears") = 15;
	// stock["Pears"] = 15;

	//	Print out each key-value pair
	cout << "Products: Stock" << endl;
	for (auto pair : stock) {
		cout << pair.first << ": " << pair.second << endl;
	}
	// Using auto keyword and .first & .second came from this W3 school link
	// Also used in general for maps, since it has a lot of helpful info
	// https://www.w3schools.com/cpp/cpp_maps.asp
}

int main() {
	arrayStuff();
	vectorStuff();
	listStuff();
	mapStuff();
}