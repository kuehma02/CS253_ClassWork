#include "exercise1.hpp"

//Print "Hello World" to the default system output
void task1() {    
    cout << "Hello World" << endl;
}
//Ask the user to enter their first name and print "Hello USERNAME"
void task2() {
    string firstname;
    cout << "Enter your first name" << endl;
    cin >> firstname;
    cout << "Hello " << firstname << endl;
}
//Ask a user to enter their full name and print the initials (ie. John Doe should yield JD)
void task3() {
    string firstname, lastname;
    cout << "Enter your full name" << endl;
    cin >> firstname >> lastname;
    cout << "Your initials are " << firstname.at(0) << lastname.at(0) <<endl;
}
//Ask a user to enter their age and print "Minor" (if age is less than 21) or "Major" (if age is 21+)
void task4() {
    int age;
    cout << "Enter age" << endl;
    cin >> age;
    if (age < 21) {
        cout << "Minor" << endl;
    }
    else {
        cout << "Major" << endl;
    }
}
//Generate a random number, print it, and print whether it's odd or even
void task5() {
    long a = rand();
    cout << a << endl;
    int rem = a % 2;

    if (rem == 0){
        cout << "Even";
    } else {
        cout << "Odd";
    }
    cout << endl;
}
//Print all numbers between 1 and 20 (inclusive).
void task6() {
    //TODO: Implement task6
}
//Calculate and print sum of all numbers between 1 and 100 (inclusive).
void task7() {
    //TODO: Implement task7
}
//Calculate and print sum of all multiples of 253 between 1 and 2018 (inclusive).
void task8() {
    // int sum = 0;
    // for (int i = 1; i <= 2018; ++i) {
    //     if (i % 253 == 0){
    //         sum = sum + i;
    //     }
    // }
    // cout << sum << endl;
    int a = 20;
    int b = 21;

    if (a++ >= b) {
        cout << a << "is greater than " << b;
    } else {
        cout << a << " is less than " << b;
    }
    cout << endl;
}
//Calculate and print sum and product of all numbers between 1 and 20 (inclusive). Hint: use a proper data type to hold a very large value of the product. 
void task9() {
    //TODO: Implement task9
}
//Print all numbers between 1 and 100 (inclusive) replacing all multiples of 3 with "fuzz", multiples of 5 with "buzz", multiples of 3 and 5 with "zzz".
void task10() {
    //TODO: Implement task10
}
