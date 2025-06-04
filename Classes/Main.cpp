#define _CRTDBG_MAP_ALLOC 
#include <stdlib.h> 
#include <crtdbg.h>

#include <iostream>
#include "Database.h"
#include "Animal.h"
using namespace std;

int main() {
	Database* database = new Database;
	// menu to perform operations on the database
	// TODO: Create menu in main method, add animals and whatnot

    bool quit = false;
    while (!quit)
    {
        cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Load\n6 - Save\n7 - Quit\n";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
            {
                cout << endl <<  "Enter type (1 for Cat, 2 for Bird): ";
                int t;
                cin >> t;
                if (t == 1) { database->add(Animal::eType::CAT); }
                else { database->add(Animal::eType::BIRD); }
                break;
            }
            case 2: 
                database->displayAll(); 
                break; 
            case 3:
            {
                cout << "Enter Animal Name: ";
                string name;
                cin >> name;
                database->display(name);
                break;
            }
            case 4:
            {
                cout << endl << "Enter type (1 for Cat, 2 for Bird): ";
                int t;
                cin >> t;
                database->display(static_cast<Animal::eType>(t)); 
                break;
            }
            case 5:
            {
                cout << "enter filename: ";
                string name;
                cin >> name;
                database->load(name);
                break;
            }
            case 6:
            {
                cout << "enter filename: ";
                string name;
                cin >> name;
                database->save(name);
                break;
            }
            case 7:
                quit = true;
                break;
        }
    }

    cout << &database << endl;
    delete database;
    _CrtDumpMemoryLeaks();
}

/* When updating my assignment to this final project, I had some help from ChatGPT and sites on the internet
The main trouble spots I encountered were relating to smart pointers and refactoring my code to include them.
For example, my foreach loops were broken after switching, and ChatGPT is where I got "const auto&" from.
I tried to make sure that I understood everything it was giving me as a solution, so I can learn from my mistakes.

My messages with ChatGPT can be found here: https://chatgpt.com/share/683fc9fd-9244-800d-9d23-231cd9cd6e6e

Other sources:
https://stackoverflow.com/questions/3283778/why-can-i-not-push-back-a-unique-ptr-into-a-vector
*/