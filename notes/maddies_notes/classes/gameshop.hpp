#include "bits/stdc++.h"

using namespace std; 

#ifndef GAME_H
#define GAME_H

class ComputerGame {
    private:
        string title;
        string platform;
        int year;
        double price;
    public:
        ComputerGame();
        ComputerGame(string, string, double);
        ~ComputerGame();
        string getTitle() const {return title;}
        string getPlatform() const {return platform;}
        double getPrice() const {return price;}
        void setPrice(double newPrice) {price = newPrice;} 

};

#endif
