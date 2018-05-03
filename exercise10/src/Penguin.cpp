#include "Penguin.hpp"

Penguin::Penguin(string name, int age, bool swimming):
    Bird(name, age, "Antarctica", 1), swimming(swimming) {
        className = __FUNCTION__;
    };

string Penguin::move() const {
    if (swimming == true){
        return "swims";
    }
    return "walks";
}

string Penguin::sound() const {
    return "Heyyy";
}
