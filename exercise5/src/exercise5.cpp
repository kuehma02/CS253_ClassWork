#include "exercise5.hpp"

/* 
 * Task 7
 * Define function getStockPrice(Company c) that returns current value of stockPrice
 * Define void setStockPrice(Company &c, double newStockPrice) that assigns newStockPrice to stockPrice.
 * */
double getStockPrice(Company c){
    return c.stockPrice;
}
void setStockPrice(Company &c, double newStockPrice){
    c.stockPrice = newStockPrice;
}

/* 
 * Task 8
 * Create a function initLaptop(Laptop &item, string _manufacturer, double _price, string _color) that initializes item's fields to the respective parameters.
 * */
void initLaptop(Laptop &item, string _manufacturer, double _price, string _color){
    item.manufacturer = _manufacturer;
    item.price = _price;
    item.color = _color;

}


/*
 * Task 9
 * Define a function that returns the current value of a University name
 * Define a function that assigns a new value to the University name.
 * Define a function that returns the current value of a University rating
 * Define a function that assigns a new value to the Universwity rating.
 * */
string University::getName() const {
    return name;
}
void University::setName(string newName) {
    name = newName;
}

int University::getRating() const{
    return rating;
}
void University::setRating(int newRating){
    rating = newRating;
}

