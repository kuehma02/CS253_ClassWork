#include "Animal.hpp"

Animal::Animal(string name, int age, string habitat) {
    className = __FUNCTION__;
    this->name = name;
    this->age = age;
    this->habitat = habitat;
}

ostream& operator<<(ostream& os, const Animal& a) {
    os << a.age << " years old " << a.className << " " << a.name << " says " << a.sound() << " and " << a.move() << " back to " << a.habitat;
    //10 years old Parrot Alice says I want a cracker and flies back to Tropics
    // TODO: implement the operator overload
    return os;
}
 