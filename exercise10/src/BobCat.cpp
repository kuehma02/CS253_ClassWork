#include "BobCat.hpp"

BobCat::BobCat(string name, int age) :
    Feline(name, age, "Forest", true){
        className = __FUNCTION__; 
    };

