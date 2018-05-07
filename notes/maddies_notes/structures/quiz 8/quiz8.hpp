#ifndef QUIZ8_H
#define QUIZ8_H

#include <bits/stdc++.h>

using namespace std;

class Date {
    private:
        int day;
        int month;
        int year;
    public:
        Date();
        Date(int, int, int);
        inline int getDay() { return this->day; }
        inline void setDay(int day) { this->day = day; }
        inline int getMonth() { return this->month; }
        inline void setMonth(int month) { this->month = month; }
        inline int getYear() { return this->year; }
        inline void setYear(int year) { this->year = year; }
        friend ostream& operator<<(ostream&, const Date&);
};

Date::Date() {
    this->day = 3;
    this->month = 5;
    this->year = 1861;
}

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

ostream& operator<<(ostream& os, const Date& d) {
    os << d.month << "/" << d.day << "/" << d.year;
    return os;
}

class Person {
    private:
        string name;
        Date *dob;
    public:
        Person();
        Person(string, Date*);
        inline string getName() { return this->name; }
        inline void setName(string name) { this->name = name; }
        inline Date* getDOB() { return dob; }
        inline void setDOB(Date* dob) { this->dob = dob; }
        friend ostream& operator<<(ostream&, const Person&);
};

Person::Person() {
    this->name = "John Doe";
    this->dob = new Date();
}

Person::Person(string name, Date *date) {
    this->name = name;
    this->dob = date;
}

ostream& operator<<(ostream& os, const Person& p) {
    os << p.name << " was born on " << *(p.dob);
    return os;
}

#endif