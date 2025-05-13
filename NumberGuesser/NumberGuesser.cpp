// NumberGuesser.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/* 
 Returns - 1 if guess is lower than the actual number
 Returns 0 if the guess is the same as the actual number
 Returns 1 if the guess is higher than the actual number
*/
int checkNumber(int guess, int actual) {
    if (guess < actual) { return -1; }
    else if (guess > actual) { return 1; }
    else { return 0; }
}

int main()
{
    cout << "Welcome to the number guesser! Guess a random number between 1-10 to win!" << endl;
    bool invalidSelection;
    int attempts = 0;
    do {
        invalidSelection = false;
        cout << "Enter the desired difficulty." << endl;
        cout << "1. Easy (5 guesses)" << endl;
        cout << "2. Medium (3 guesses)" << endl;
        cout << "3. Hard (2 guesses)" << endl;
        int selection = -1;

        if (!(cin >> selection)) {
            selection = -1;
            cout << "Enter a numeric value." << endl;
            invalidSelection = true;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            continue;
        }

        if (selection == 1) { attempts = 5;}
        else if (selection == 2) { attempts = 3; }
        else if (selection == 3) { attempts = 2; }
        else { 
            cout << "Entered an invalid difficulty" << endl; 
            invalidSelection = true;
        }
    } while (invalidSelection);

    // Taken from the assignment page on LMS
    srand(time(0)); // Seed random number generator
    int randomNumber = rand() % 10 + 1; // Random number from 1 to 10
    int guessedNumber = -1;
    bool gameOver = false;

    while (!gameOver) {
        cout << "Enter guess: ";

        if (!(cin >> guessedNumber)) {
            cout << "Enter a numeric value." << endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            continue;
        }

        int result = checkNumber(guessedNumber, randomNumber);
        if (result < 0) { 
            attempts--;
            cout << "Your guess was lower than the random number. You have " << attempts << " attempts left." << endl;
        }
        else if (result > 0) { 
            attempts--;
            cout << "Your guess was higher than the random number. You have " << attempts << " attempts left." << endl;
        }
        else {
            cout << "That was the random number, you win!";
            gameOver = true;
            return 0;
        }
        if (attempts <= 0) {
            cout << "You ran out of attempts, too bad! The correct number was " << randomNumber;
            gameOver = true;
        }
    }
}

/* Sources that were helpful / I got some code from:
* https://stackoverflow.com/questions/257091/how-do-i-flush-the-cin-buffer -- Clearing the cin buffer/clearing errors to allow reuse
* https://cplusplus.com/forum/beginner/119218/ -- having cin in a conditional statement to check if it works properly
* https://www.geeksforgeeks.org/cin-in-c/ -- All functions of cin
*/
