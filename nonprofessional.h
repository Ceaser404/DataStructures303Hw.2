#ifndef NONPROFESSIONAL_H
#define NONPROFESSIONAL_H

#include "employee.h"

// Derived class for nonprofessional employees
class Nonprofessional : public Employee {
private:
    double hourly_rate;
    int hours_worked;

public:
    // Constructor
    Nonprofessional(std::string n, int i, double hr, int hw);

    // Overrides base class functions
    double calculate_weekly_salary() override;
    double calculate_healthcare_contribution() override;
    double calculate_vacation_days() override;
};

#endif
