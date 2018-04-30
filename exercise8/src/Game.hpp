#include "exercise8.hpp"

#ifndef GAME_H
#define GAME_H

class Game {
    private:
        string title;
        int rating;
    public:
        Game(string, int);
        inline string getTitle() { return this->title; }
        inline int getRating() { return this->rating; }
        friend ostream& operator<<(ostream&, const Game&);

};

#endif
