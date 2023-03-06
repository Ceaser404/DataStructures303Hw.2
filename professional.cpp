#include "professional.h"
#include <random>
#include <iostream>

using namespace std;

// Initialize professional
Professional::Professional(string n, int i, double v) : Employee(n, i) {
    vacation_days = v;
    weekly_salary = calculate_weekly_salary();
}

// Overrides base class function
double Professional::calculate_weekly_salary() {
    // The low end of salary is 60k yearly while the upper end is 150k
    double lower_bound = 60;
    double upper_bound = 150;
    
    // seed generator
    random_device rd;
    // random number generator
    mt19937 gen(rd());
    
    
    // choose value as equally likely across distribution
    uniform_real_distribution<double> dist(lower_bound, upper_bound);
    
    yearly_salary = dist(gen);
    weekly_salary = floor((yearly_salary * 1000) / 50);
  
    return weekly_salary;
}

// calculate healthcare contribution (10% of salary)
double Professional::calculate_healthcare_contribution() {
    return weekly_salary / 10;
}

double Professional::calculate_vacation_days() {
    
    //determine and return number of vacation days earned this week
    if (weekly_salary < 2000){
        vacation_days = 0.25;
    }else if(weekly_salary < 2500) {
        vacation_days = 0.33;
    }else if(weekly_salary > 2500) {
        vacation_days = 0.5;
    }
    return vacation_days;
}
