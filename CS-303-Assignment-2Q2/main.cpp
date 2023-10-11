#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;


int main() {
    // Create a Professional employee
    Professional professional("John", 5000.0, 500.0);

    // Create a Nonprofessional employee
    Nonprofessional nonprofessional("Alice", 20.0, 50.0);

    // Set the hours worked for the Nonprofessional employee
    nonprofessional.setHoursWorked(45);

    // Display information about the employees
    cout << professional.getName() << "'s Weekly Salary: $" << professional.calculateWeeklySalary() << endl;
    cout << nonprofessional.getName() << "'s Weekly Salary: $" << nonprofessional.calculateWeeklySalary() << endl;
    cout << nonprofessional.getName() << "'s Vacation Days: " << nonprofessional.calculateVacationDays() << endl;

    return 0;
}
