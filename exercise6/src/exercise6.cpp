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
    Game g;
    while (!fileIn.eof()){
        string tempYear;
        string tempPrice;
        getline(fileIn, g.title, '|');
        getline(fileIn, g.publisher, '|');
        getline(fileIn, g.platform, '|');
        getline(fileIn, tempYear, '|');
        getline(fileIn, tempPrice, '\n');

        g.releaseYear = stoi(tempYear);
        g.price = stod(tempPrice);

        inventory.push_back(g);
    }
}
// Display inventory
void displayInventory(vector<Game> inventory){
    cout << setfill('-') << setw(75) << '-' << endl << setfill(' ');
    cout << left << setw(5) << "#" << setw(20) << "Title" << setw(20) << "Publisher" << setw(10) << "Platform" << setw(10) << "Released" << setw(10) << "Price" << endl;
     cout << setfill('-') << setw(75) << '-' << endl << setfill(' ');
    int i = 0;
    for (Game g: inventory) {
        cout << left << setw(5) << ++i << setw(20) << g.title << setw(20) << g.publisher << setw(10) << g.platform << setw(10) << g.releaseYear;
        cout << "$" << right << setw(7) << fixed << setprecision(2) << g.price << endl; 
    }    
    cout << setfill('-') << setw(75) << '-' << endl << setfill(' ');
}
// Display the shopping cart
double displayCart(vector<GameInCart> cart, double salesTax, ofstream &fout){
    cout << "Your Cart" << endl;
    cout << setfill('-') << setw(50) << '-' << endl << setfill(' ');
    cout << left << setw(20) << "Title" << setw(10) << "Platform" << setw(12) << "Price" << setw(10) << "Quantity" << endl;
    cout << setfill('-') << setw(50) << '-' << endl << setfill(' ');

    double total = 0;
    for (GameInCart gc: cart) {
        cout << left << setw(20) << gc.title << setw(10) << gc.platform;
        cout << "$" << right << setw(8) << fixed << setprecision(2) << gc.price;
        cout << right << setw(10) << gc.quantity << endl;
        fout << gc.title << "|" << gc.platform << "|" << gc.price << "|" << gc.quantity << endl;
        total += (gc.price * gc.quantity);
    }

    double discount = 0;
    if (total >= 100){
        discount = total * .1;
        total -= discount;
    }

    cout << setfill('-') << setw(50) << '-' << endl << setfill(' ');
    cout << left << setw(36) << "Total: " << '$' << right << setw(12) << total << endl;
    salesTax = (salesTax / 100) * total;
    cout << left << setw(36) << "Taxes: " << '$' << right << setw(12) << fixed << setprecision(2) << salesTax << endl;
    cout << left << setw(36) << "Owed: " << '$' << right << setw(12) << fixed << setprecision(2) << total + salesTax << endl;


return 0.00;
}
// Read an integer within the pecified boundaries
int readANumber(int lower_bound, int upper_bound){
    int result = lower_bound - 1;
        do {
            cout << "Please enter a number between " << lower_bound << " and " << upper_bound << endl;
            cin >> result;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(__INT_MAX__, '\n');
                result = lower_bound - 1;
            }

            
        } while (result < lower_bound || result > upper_bound);
        cin.clear();
        cin.ignore(__INT_MAX__, '\n');

        return result;

}
// Read the state code
void readState(vector<State> &states, double &salesTax){
    string usersState;
    cout << "Please enter your states two letter code "  << endl;
    cin >> usersState;
    bool notIn = true;
    while (notIn){
        for (State s: states) {
            if (s.stateID == usersState) {
                notIn = false;
            }
        }
        if (notIn){
            cout << "Please enter your states two letter code "  << endl;
            cin >> usersState;
        }
    }
    for (State s: states) {
        if (s.stateID == usersState) {
            cout << "Sales tax in " << s.stateName << " is " << fixed << setprecision(2) << s.tax << '%' << endl;
            salesTax = s.tax;
        }
    }
}
