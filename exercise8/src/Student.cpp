#include "Student.hpp"

Student::Student(string name, string major, double gpa) {
    this->name = name;
    this->major = major;
    this->gpa = gpa;
}

ostream& operator<<(ostream& os, const Student& s) {
    os << s.name << " (" << fixed << setprecision(2) << s.gpa <<") majors in " << s.major;
    return os;
}