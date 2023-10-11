#include "Employee.h"
#include <iostream>
using namespace std;

// Employee class methods
Employee::Employee(const string& name, double healthInsurance) : name(name), healthInsurance(healthInsurance) {}

Employee::~Employee() {}

double Employee::calculateHealthCareContributions() const {
    return healthInsurance;
}

const string& Employee::getName() const {
    return name;
}

// Professional class methods
Professional::Professional(const string& name, double monthlySalary, double healthInsurance)
    : Employee(name, healthInsurance), monthlySalary(monthlySalary) {}

double Professional::calculateWeeklySalary() const {
    return monthlySalary / 4; // Assuming a month has 4 weeks
}

double Professional::calculateVacationDays() const {
    return 10.0; // Professionals get 10 days of vacation
}

// Nonprofessional class methods
Nonprofessional::Nonprofessional(const string& name, double hourlyRate, double healthInsurance)
    : Employee(name, healthInsurance), hourlyRate(hourlyRate), hoursWorked(0) {}

double Nonprofessional::calculateWeeklySalary() const {
    return hoursWorked * hourlyRate;
}

double Nonprofessional::calculateVacationDays() const {
    return hoursWorked / 40.0; // 40 hours give 1 day of vacation
}

void Nonprofessional::setHoursWorked(double hours) {
    hoursWorked = hours;
}
