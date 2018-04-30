#include "Game.hpp"

Game::Game(string title, int rating) {
    this->title = title;
    this->rating = rating;
}

ostream& operator<<(ostream& os, const Game& g) {
    os << "The rating of " << g.title << " is " << g.rating;
    return os;
}