#include <iostream>

using namespace std;

string name;
char initial;
short age;
bool isAdult;
unsigned int zipcode;
float wage;
short daysWorked;
float hoursWorkedPerDay[7];
const float TAX = 0.1f;

int main() {
    // Get user input
    cout << "Enter First name: ";
    cin >> name;

    cout << "Enter Initial of Last Name: ";
    cin >> initial;

    cout << "Enter Age: ";
    cin >> age;
    isAdult = (age >= 18);

    cout << "Enter zipcode: ";
    cin >> zipcode;

    cout << "Enter Hourly Wage: ";
    cin >> wage;

    cout << "Enter Number of Days Worked (Max 7): ";
    cin >> daysWorked;

    // Calculate total hours worked
    float totalHours = 0;

    for (int i = 0; i < daysWorked; i++) {
        cout << "Enter Hours Worked for day " << (i + 1) << ": ";
        cin >> hoursWorkedPerDay[i];

        totalHours += hoursWorkedPerDay[i];
    }

    // Calculate gross income, tax, and net income.
    float grossIncome = totalHours * wage;
    float taxAmount = grossIncome * TAX;
    float netIncome = grossIncome - taxAmount;

    // Display the employee's payroll summary
    cout << "\nEmployee Payroll Summary\n";
    cout << "-------------------------\n";
    cout << "Name: " << name << " " << initial << ".\n";
    cout << "Age: " << age << " (Adult: " << (isAdult ? "Yes" : "No") << ")\n";
    cout << "Zipcode: " << zipcode << "\n";
    cout << "Hourly Wage: $" << wage << " per hour\n";
    cout << "Total Hours Worked: " << totalHours << " hours\n";
    cout << "Gross Income: $" << grossIncome << "\n";
    cout << "Tax Amount: $" << taxAmount << "\n";
    cout << "Net Income: $" << netIncome << "\n";
}

/*
* I originally tried to get fancy and make methods for each of these functions,
* but I'm not familiar enough with C++ to get it to work yet...

void getUserInput() {
    cout << "Enter First name: ";
    cin >> name;

    cout << "Enter Initial of Last Name: ";
    cin >> initial;

    cout << "Enter Age: ";
    cin >> age;
    isAdult = (age >= 18);

    cout << "Enter zipcode: ";
    cin >> zipcode;

    cout << "Enter Hourly Wage: ";
    cin >> wage;

    cout << "Enter Number of Days Worked (Max 7): ";
    cin >> daysWorked;
}

float calculateTotalHours() {
    float totalHours = 0;

    for (int i = 0; i < daysWorked; i++) {
        cout << "Enter Hours Worked for day " << (i + 1) << ": ";
        cin >> hoursWorkedPerDay[i];

        totalHours += hoursWorkedPerDay[i];
    }
    return totalHours;
}
*/