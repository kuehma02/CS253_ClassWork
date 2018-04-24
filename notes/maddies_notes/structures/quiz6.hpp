#ifndef QUIZ6_H
#define QUIZ6_H
#include <bits/stdc++.h>
using namespace std;
struct Date {
    int day;
    int month;
    int year;
};
struct Name {
    string first;
    string last;
};
struct Student {
    private:
        int id;
        Name full_name;
        Date dob;
        double gpa;
    public:
        Student(int i, Name n, Date d, double g) {
            id = i;
            full_name = n;
            dob = d;
            gpa = g;
        }
        Student(int i, Name* n, Date* d, double g) {
            id = i;
            full_name = *n;
            dob = *d;
            gpa = g;
        }
        Name getName() { return full_name; }
        Date getDob() { return dob; }
        double getGpa() { return gpa; }
        void setGpa(double g) { gpa = g; }
        void print() {
            cout << 
                full_name.first << " " << 
                full_name.last << "(" << 
                dob.month << "/" << 
                dob.day << "/" << 
                dob.year << "): " << 
                fixed << setprecision(2) << gpa;
        }
};
#endif