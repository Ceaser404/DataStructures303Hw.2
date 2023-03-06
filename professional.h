#ifndef PROFESSIONAL_H
#define PROFESSIONAL_H

#include "employee.h"

// Derived class for professional employees
class Professional : public Employee {
private:
    double yearly_salary = 0;
    double vacation_days;

public:
    // Constructor
    Professional(std::string n, int i, double v);

    // Overrides base class functions
    double calculate_weekly_salary() override;
    double calculate_healthcare_contribution() override;
    double calculate_vacation_days() override;
};

#endif
