#include "Bird.hpp"

Bird::Bird(string name, int age, string habitat, int eggs) : 
    Animal(name, age, habitat), 
    eggs(eggs) {}


ostream& operator<<(ostream& os, const Bird& b) {
    os << (const Animal &) b << " to lay " << b.eggs ;
    if (b.eggs == 1){
        os << " egg";
    } else {
        os << " eggs";
    }
       
    return os;
}
