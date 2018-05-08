#include <iostream>
#include <iomanip>
#include <typeinfo>

using namespace std;

int mystery(int n) {
    if(n<= 1){return 1;}
    return n * mystery(n-1);
}

int main(){

    cout << mystery(5) << endl;

    return 0;
}