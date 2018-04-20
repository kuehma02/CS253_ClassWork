/* 
 * This is an actual test file
 */
#include "catch.hpp"
#include "../src/exercise5.cpp"

TEST_CASE( "Structure Contact is implemented", "[Contact]" ) {
    Contact c;
    c.name = "Madeline";
    c.phone = "555-320-1234";
    CHECK( c.name == "Madeline");
    CHECK( c.phone == "555-320-1234");
}

TEST_CASE( "Structure Room is implemented", "[Room]" ) {
    Room r;
    r.building = "Miller";
    r.number = 515;
    CHECK( r.building == "Miller");
    CHECK( r.number == 515);
}

TEST_CASE( "Structure Employee is implemented", "[Employee]" ) {
    Employee e;
    e.firstName = "David";
    e.lastName = "Mendez";
    e.salary = 8000;
    e.isFullTime = false;
    CHECK ( e.firstName == "David");
    CHECK ( e.lastName == "Mendez");
    CHECK ( e.salary == 8000);
    CHECK ( e.isFullTime == false);
}

TEST_CASE( "Structure Animal is implemented", "[Animal]" ) {
    Animal tiger;
    tiger.weight = 600;
    tiger.isHungry = true;
    CHECK (tiger.weight == 600);
    CHECK (tiger.isHungry == true);
}

TEST_CASE( "Structure Game is implemented", "[Game]" ) {
    Game g;
    g.title = "Lego Star Wars";
    g.rating = 10;
    CHECK (g.title == "Lego Star Wars");
    CHECK (g.rating == 10);
}

TEST_CASE( "Structure Song is implemented", "[Song]" ) {
    Song s;
    s.title = "Praying" ;
    s.artist = "Kesha";
    CHECK (s.title == "Praying");
    CHECK (s.artist == "Kesha");
}

TEST_CASE( "Structure Company is implemented", "[Company]" ) {
    Company c;
    c.name = "Subway";
    c.stockPrice = 100.59;
    CHECK (c.name == "Subway");
    CHECK (c.stockPrice == 100.59);
}

TEST_CASE( "Structure Laptop is implemented", "[Laptop]" ) {
    Laptop l;
    l.manufacturer = "Apple";
    l.price = 2000.87;
    l.color = "white";
    CHECK (l.manufacturer == "Apple");
    CHECK (l.price == 2000.87);
    CHECK (l.color == "white");
}

TEST_CASE( "Structure University is implemented", "[University]" ) {
    University uni;
    uni.setName ("University of Minnesota");
    uni.setRating(100);
    CHECK ( uni.getName() == "University of Minnesota");
    CHECK ( uni.getRating() == 100);
}

TEST_CASE( "Structure Student is implemented", "[Student]" ) {
    Student s;
    s.name = "Anna";
    s.major = "CS";
    s.gpa = 3.8;
    CHECK ( s.name == "Anna");
    CHECK ( s.major == "CS");
    CHECK ( s.gpa == 3.8);

}