#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

// Base class for all employees
class Employee {
protected:
    std::string name;
    int id;
    double weekly_salary;

public:
    // Constructor
    Employee(std::string n, int i);

    // Pure virtual functions to be implemented in derived classes
    virtual double calculate_weekly_salary() = 0;
    virtual double calculate_healthcare_contribution() = 0;
    virtual double calculate_vacation_days() = 0;

    // Prints employee information
    void print_info();
};

#endif


