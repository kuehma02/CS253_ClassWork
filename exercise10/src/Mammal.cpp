#include "Mammal.hpp" 

Mammal::Mammal(string name, int age, string habitat, bool carnivore) :
    Animal(name, age, habitat),
    carnivore(carnivore) {}

string Mammal::move() const {
    return "runs";
}

ostream& operator<<(ostream& os, const Mammal& m) {
    os << (const Animal &) m << " to eat ";

    if (m.carnivore == true) {
        os << "meat";
    } else {
        os << "grass";
    }
    return os;
}
