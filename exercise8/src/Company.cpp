#include "Company.hpp"

Company::Company(string name, double stockPrice) {
    this->name = name;
    this->stockPrice = stockPrice;
}

ostream& operator<<(ostream& os, const Company& c) {
    os << c.name << "'s stock price is $"<< fixed << setprecision(2) << c.stockPrice;
    return os;
}