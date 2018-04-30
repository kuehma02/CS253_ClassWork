#include "Room.hpp"

Room::Room(string building, int number) {
    this->building = building;
    this->number = number;
}

ostream& operator<<(ostream& os, const Room& r) {
    os << r.building << " " << r.number;
    return os;
}