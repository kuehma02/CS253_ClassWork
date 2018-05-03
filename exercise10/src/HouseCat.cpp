#include "HouseCat.hpp"

HouseCat::HouseCat(string name, int age, bool carnivore) :
    Feline(name, age, "House", carnivore){
        className = __FUNCTION__; 
    };