#include "structures.hpp"

int main() {
    cout <<"Hello, \\\"CS253\"\\" << endl;


    double l = 2;
    cout << l << " " << 1/l << l+1/l << endl;


    for (int g = 0; g> 5; g++){
        cout  << "Yoda";
    }

    bool q = false;
    while(!q){
        cout << "hi";
        q = true;
    }


    int arr11[10];
    cout << arr11[0];

    vector<int> vec(10);
    cout << endl << "at is" << vec.at(0)<< endl;
    cout << 1*0+2*1+3*2;


    cout << "\n\n\n";
    int arr[2][3];
    for (int i =0; i<2; i++){
        for (int j =0; j<3; j++){
            arr[i][j]= (i+1)*(j+1);
        }
        cout << arr[1];
    }

    return 0;
}