#include "employee.h"
#include "professional.h"
#include "nonprofessional.h"
#include <iostream>

using namespace std;

int main() {
    // Creating Professional and Nonprofessional employees
    Professional prof("Samantha Baker", 12833392, 20);
    Nonprofessional nonprof("Danny Englewood", 13940022, 17.5, 40);

    // Printing information for Professional employee
    cout << "Professional Employee" << endl;
    prof.print_info();
    cout << endl;

    // Printing information for Nonprofessional employee
    cout << "Nonprofessional Employee" << endl;
    nonprof.print_info();
    cout << endl;

    return 0;
}
