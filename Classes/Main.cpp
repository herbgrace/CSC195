#include <iostream>
#include "Database.h"
#include "Animal.h"
using namespace std;

int main() {
	Database database;
	// menu to perform operations on the database
	// TODO: Create menu in main method, add animals and whatnot

    bool quit = false;
    while (!quit)
    {
        cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
            {
                cout << endl <<  "Enter type (1 for Cat, 2 for Bird): ";
                int t;
                cin >> t;
                if (t == 1) { database.create(Animal::eType::CAT); }
                else { database.create(Animal::eType::BIRD); }
                break;
            }
            case 2: 
                database.displayAll(); 
                break; 
            case 3:
            {
                cout << "Enter Animal Name: ";
                string name;
                cin >> name;
                database.display(name);
                break;
            }
            case 4:
            {
                cout << endl << "Enter type (1 for Cat, 2 for Bird): ";
                int t;
                cin >> t;
                database.display(static_cast<Animal::eType>(t)); 
                break;
            }
            case 5:
                quit = true;
                break;
            }
    }
}