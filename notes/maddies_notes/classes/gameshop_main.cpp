#include "gameshop.cpp"

int main() {
    cout << "Classes" << endl; 
    ComputerGame g1 = ComputerGame();
    ComputerGame *g2 = new ComputerGame("MLB","Grass", 5.25);
    cout << g1.getPrice() << endl;
    cout << (*g2).getTitle() << " costs " << (*g2).getPrice() << endl;
    return 0;
}
