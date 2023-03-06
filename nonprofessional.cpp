#include "nonprofessional.h"
#include <iostream>

using namespace std;

// initialize variables within implementation file
Nonprofessional::Nonprofessional(string n, int i, double hr, int hw) : Employee(n, i) {
    hourly_rate = hr;
    hours_worked = hw;
    weekly_salary = calculate_weekly_salary();
}

// calculate earnings
double Nonprofessional::calculate_weekly_salary() {
    return hourly_rate * hours_worked;
}

// The health care contributions are 5% for hourly employees
double Nonprofessional::calculate_healthcare_contribution() {
    return weekly_salary * 0.05;
}

// 10 days of vacation a year
double Nonprofessional::calculate_vacation_days() {
    return hours_worked / 200.0;
}
