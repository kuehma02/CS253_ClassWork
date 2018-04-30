#include "Book.hpp"

Book::Book(string title, string author, double price) {
    this->title = title;
    this->author = author;
    this->price = price;
}

ostream& operator<<(ostream& os, const Book& b) {
    os << b.title << " by " << b.author << " costs $" << b.price;
    return os;
}