/*
 * Assignment: Exercise 7
 * Author: Roman Yasinovskyy
 * Date: 2018-04-24
 */
#ifndef EXERCISE7_H
#define EXERCISE7_H

#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;


class Book {
    private:
        string title;
        string author;
        double price;
    public:
        Book(string, string, double);
        friend ostream& operator<<(ostream&, const Book&);
};


class Room {
    private:
        string building;
        int number;
    public:
        Room(string, int);
        friend ostream& operator<<(ostream&, const Room&);
};


class Employee {
    private:
        string firstName;
        string lastName;
        double salary;
        bool isFullTime;
    public:
        Employee(string, string, double, bool);
        friend ostream& operator<<(ostream&, const Employee&);
};


class Customer {
    private:
        double loan;
        int term;
    public:
        Customer(double,int);
        inline double getLoan() { return this->loan; }
        inline int getTerm() { return this->term; }
        friend ostream& operator<<(ostream&, const Customer&);
};

class Game {
    private:
        string title;
        int rating;
    public:
        Game(string, int);
        inline string getTitle() { return this->title; }
        inline int getRating() { return this->rating; }
        friend ostream& operator<<(ostream&, const Game&);
};


class Song {
    private:
        string title;
        string artist;
    public:
        Song(string, string);
        inline string getTitle() { return this->title; }
        inline string getArtist() { return this->artist; }
        friend ostream& operator<<(ostream&, const Song&);
};


class Company {
    private:
        string name;
        double stockPrice;
    public:
        Company(string, double);
        inline double getStockPrice() { return this->stockPrice; }
        inline void setStockPrice(double stockPrice) { this->stockPrice = stockPrice; }
        friend ostream& operator<<(ostream&, const Company&);
};


class College {
    private:
        string name;
        int rank;
        inline void setRank(int rank) { this->rank = rank; }
    public:
        College(string, int);
        friend ostream& operator<<(ostream&, const College&);
        friend void changeCollegeRank(College&, int);
};


class Laptop {
    private:
        string manufacturer;
        double price;
        string color;
    public:
        Laptop(string, double, string);
        inline string getManufacturer() { return this->manufacturer; }
        inline void setManufacturer(string manufacturer) { this->manufacturer = manufacturer; }
        inline double getPrice() { return this->price; }
        inline void setPrice(double price) { this->price = price; }
        inline string getColor() { return this->color; }
        inline void setColor(string color) { this->color = color; }
        friend ostream& operator<<(ostream&, const Laptop&);
};


class Student {
    private:
        string name;
        string major;
        double gpa;
    public:
        Student(string, string, double);
        friend ostream& operator<<(ostream&, const Student&);
};


class Roster {
    private:
        vector<Student> studentList;
    public:
        Roster(const char*);
        inline vector<Student> getStudentList() { return this->studentList; }
        friend ostream& operator<<(ostream&, const Roster&);
};


#endif
