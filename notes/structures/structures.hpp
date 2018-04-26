#include "bits/stdc++.h"

using namespace std;

struct Book {
    string title;
    string author;
    int pages;
    double getPrice();
    void setPrice(double newPrice);
    // double price;
    private:
        double price;
};

void printBook(Book b);
