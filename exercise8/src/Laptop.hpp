#include "exercise8.hpp"

#ifndef LAPTOP_H
#define LAPTOP_H

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

#endif
