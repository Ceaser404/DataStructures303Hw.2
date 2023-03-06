#include "employee.h"
#include <iostream>

using namespace std;

Employee::Employee(string n, int i) {
    name = n;
    id = i;
    weekly_salary = 0;
}

// Prints employee information
void Employee::print_info() {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Weekly Salary: $" << weekly_salary << endl;
    cout << "Healthcare Contribution: $" << calculate_healthcare_contribution() << endl;
    cout << "Vacation Days: " << calculate_vacation_days() << endl;
}
