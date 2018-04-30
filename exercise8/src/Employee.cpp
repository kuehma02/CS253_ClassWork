#include "Employee.hpp"

Employee::Employee(string firstName, string lastName, double salary, bool isFullTime) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->salary = salary;
        this->isFullTime = isFullTime;
}

ostream& operator<<(ostream& os, const Employee& e) {
    os << e.firstName << " "<< e.lastName << " earns $" << fixed << setprecision(2) << e.salary << " and works ";
    if (e.isFullTime == true) {
        os << "full-time";
    }else {
        os << "part-time";
    }
    return os;
}