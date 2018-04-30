#include "exercise8.hpp"

#ifndef COMPANY_H
#define COMPANY_H

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

#endif
