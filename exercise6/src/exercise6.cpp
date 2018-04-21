#include "exercise6.hpp"

/*
 * Implement functions here
 * */

// Print n characters c
void printNChars(char c, int n){

}
// Print n characters c to a file
void printNChars(ofstream &fout, char c, int n){

}
// Read state information into a vector
void readStates(ifstream &fileIn, vector<State> &states){
    fileIn.open("exercise6_stateTaxRates.txt");
    
    State s;
    while (!fileIn.eof()) {
        string tempTax;
        getline(fileIn, s.stateID, '|');
        getline(fileIn, tempTax, '|');
        getline(fileIn, s.stateName, '\n');
        s.tax = stod(tempTax);

        states.push_back(s);
    }
}
// Read the inventory into a vector
void readInventory(ifstream &fileIn, vector<Game> &inventory){

}
// Display inventory
void displayInventory(vector<Game> inventory){

}
// Display the shopping cart
double displayCart(vector<GameInCart> cart, double salesTax, ofstream &fout){
return 0.00;
}
// Read an integer within the pecified boundaries
int readANumber(int lower_bound, int upper_bound){
return 0;
}
// Read the state code
void readState(vector<State> &states, double &salesTax){

}
