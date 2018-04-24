#include "exercise6.hpp"

int main() {
    /* Exercise 6: Online game store */
    /* Create the inventory file object */
    ifstream inventoryFileContent("data/exercise6_inventory.txt");
    if (inventoryFileContent.fail()) {
        cout << "ERROR: Could not open the inventory file" << endl;
        exit(1);
    }
    /* Create the state sales tax file object */
    ifstream statesFileContent("data/exercise6_stateTaxRates.txt");
    if (statesFileContent.fail()) {
        cout << "ERROR: Could not open the tax rate file" << endl;
        exit(1);
    }
    /* Create the cart file object */
    ofstream cartFileContent("build/exercise6_cart.txt");
    if (cartFileContent.fail()) {
        cout << "ERROR: Could not open the cart file" << endl;
        exit(1);
    }
    cout << "Reading state information" << endl;

    vector<State> states;
    readStates(statesFileContent, states);
    cout << "Read " << states.size() << " state(s) from the file" << endl;

    vector<Game> games;
    readInventory(inventoryFileContent, games);
    cout << "Read " << games.size() << " games(s) from the file" << endl;

    vector<GameInCart> cart;
    GameInCart cart1;
    char ans = 'y';
    do {
    /*
     * Display the inventory
     * Ask user to enter the game numer
     * Ask user to enter the number of copies
     * Keep asking if the uer wants to buy another one
     * Don't crash if the user enters bogus numbers
     * */
    displayInventory(games);
    int gameNumber = 0;
    int copyNumber = 0;

    gameNumber = readANumber(1,11);
    cout << "How many copies of " << (games.at(gameNumber-1)).title << " do you want to buy?" << endl;

    copyNumber = readANumber(0, 32767);

    cart1.title = games.at(gameNumber -1).title;
    cart1.platform = games.at(gameNumber -1).platform;
    cart1.price = games.at(gameNumber - 1).price;
    cart1.quantity = copyNumber;
    cart.push_back(cart1);

    cout << "Would you like to buy another game (y/n)?" << endl;
    cin >> ans;
    } while (ans == 'y');
    double salesTax = 0;
    readState(states, salesTax);
    displayCart(cart, salesTax, cartFileContent);

    inventoryFileContent.close();
    statesFileContent.close();
    cartFileContent.close();

    return 0;
}
