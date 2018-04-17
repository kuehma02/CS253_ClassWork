#include "pointers.hpp"

void addOne(int a) {
    cout << "INSIDE addOne(int)\n";
    cout << a << endl;
    a++;
    cout << a << endl;
}

int addOneRet(int a) {
    cout << "INSIDE addOneRet(int)\n";
    cout << a << endl;
    a++;
    cout << a << endl;
    return a;
}

void addOneRef(int &a) {
    cout << "INSIDE addOneRef(int &)\n";
    cout << a << endl;
    a++;
    cout << a << endl;
}

void sayHello(string name) {
    if (name == "Roman"){
        cout << "Hello Dr. Yasinovskyy" << endl;
    } else if (name =="Alice"){
        cout << "Hellow Miss" << endl;
    } else if (name =="Bob"){
        throw 1;
    } else if (name =="Charlie"){
        throw 2;
    } else {
        throw 3;
    }
}

int main() {
    // srand(0);
    // cout << "Pointers and references\n\n";
    // int aa = 10;
    // cout << "Initial value of aa: " << aa << endl;
    // addOneRet(aa); //addOne(aa);
    // cout << "Updated value of aa: " << aa << endl;
    // // because the function doesn't return, the original void function is kinda useless
    // /* cout << "Updated value of aa: " << aa << endl;
    // cout << "Updated value of aa: " << addOneRet(aa) << endl;
    // cout << "After addOneRet value of aa: " << aa << endl; */
    // // what happens inside of a function saves in side a function
    // cout << "----------------------------------------" << endl;
    
    // int* ptrInt; //* says that it is a pointer to type int
    // cout << "Value of ptrInt: " << ptrInt <<endl;
    // // ptrInt = aa; (can't assign it bc they are two different types)
    // cout << "address of aa: " << &aa << endl;
    // ptrInt = &aa;
    // cout << "Value of ptrInt: " << ptrInt << endl; //prints the address of the pointer
    // cout << "Value at the address ptrInt: " << *ptrInt << endl; //give the value at the cell at the pointer's address
    // cout << "----------------------------------------" << endl;

    // cout << "Initial value of aa: " << aa << endl;
    // addOneRef(aa);
    // cout << "Updated value of aa: " << aa << "  It works!" << endl;
    // cout << "----------------------------------------" << endl;

    // cout << "Dynamic arrays" << endl;
    // char* word = new char[5];
    // string wordStr = "hello";
    // int i = 0;
    // /* for (char c: wordStr) {
    //     word[i] = c;
    //     i++;
    // } */
    // /* cout << word << endl;
    // cout << "Another way to print" << endl;
    // cout << &word << endl;

    // for (int i = 0; i <5; i++){
    //     cout << *(word + i);
    // }
    // cout << endl << endl; */

    // // These aren't working properly, idk why

    // int valInt = 253;
    // int* ptrValInt = &valInt;
    // cout << "Size of valInt: " << sizeof(valInt) << endl;
    // cout << "Size of ptrValInt: " << sizeof(ptrValInt) << endl;

    // delete [] word; //deletes memory that you take up
    // cout << "----------------------------------------" << endl;
    
    // cout << "Exceptions" << endl;
    // sayHello("Roman");
    // try {
    //     sayHello("Charlie");
    // } catch (int err){
    //     switch (err) {
    //         case 1:
    //             cout << "Didn't like Bob";
    //             break;
    //         case 2:
    //             cout << "Didn't like Charlie much";
    //             exit(1);
    //             break;
    //         default:
    //             cout << "Didn't like anyone";
    //             break;
    //     }
    // }
    // cout << "After the exception" << endl;
    // cout << "----------------------------------------" << endl;

    cout << "Files" << endl;
    ifstream fileIn;
    fileIn.open("pointers.hpp");

    if (fileIn.fail()) {
        cout << "No such file";
        exit(2);
    }
    string line;
    while  (!fileIn.eof()) {
        getline(fileIn, line);
        cout << line << endl;
    }

    fileIn.close();



    return 0;
}
