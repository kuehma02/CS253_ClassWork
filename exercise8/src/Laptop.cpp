#include "Laptop.hpp"

Laptop::Laptop(string manufacturer, double price, string color) {
    this->manufacturer = manufacturer;
    this->price = price;
    this->color = color;
}

ostream& operator<<(ostream& os, const Laptop& l) {
    os << l.color << " laptop by " << l.manufacturer << " costs $" << fixed << setprecision(2) << l.price;
    return os;
}