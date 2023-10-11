#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
using namespace std;
// Abstract base class Employee
class Employee {
public:
    Employee(const string& name, double healthInsurance);
    virtual ~Employee();

    virtual double calculateWeeklySalary() const = 0;
    double calculateHealthCareContributions() const;
    virtual double calculateVacationDays() const = 0;

    const string& getName() const;

private:
    string name;
    double healthInsurance;
};

class Professional : public Employee {
public:
    Professional(const string& name, double monthlySalary, double healthInsurance);
    double calculateWeeklySalary() const override;
    double calculateVacationDays() const override;

private:
    double monthlySalary;
};

class Nonprofessional : public Employee {
public:
    Nonprofessional(const string& name, double hourlyRate, double healthInsurance);
    double calculateWeeklySalary() const override;
    double calculateVacationDays() const override;
    void setHoursWorked(double hours);

private:
    double hourlyRate;
    double hoursWorked;
};

#endif
