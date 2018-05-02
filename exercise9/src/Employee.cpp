#include "Employee.hpp"

// TODO: Implement member functions of the class Employee

Employee::Employee(string name, string department){
    this->name = name;
    this->department = department;
}

Employee::Employee(const Employee& e) : 
        name(e.name),
        department(e.department),
        weeklyPayment(e.weeklyPayment) {}

string Employee::getName() const { return name; }

string Employee::getDepartment() const{ return department; }

void Employee::setDepartment(string department){
    this->department = department;
}
double Employee::getWeeklyPayment() const{ return weeklyPayment; }

void Employee::setWeeklyPayment(double weeklyPayment){
    this->weeklyPayment = weeklyPayment;
}

ostream& operator<<(ostream& os, const Employee& e) {
    os << e.name << " from " << e.department;
    return os;
}