#include "exercise2.hpp"

//Task 1 implementation
string task1(string name) {
    string greeting;
    greeting = "Hello, " + name; 
    return (greeting);
    
}
//Task 2 implementation
string task2(string name){
    string initials;
    initials = name.at(0);
    for(int i =0; i <= (name.length() - 1); i++) {
        if (name.at(i) == ' '){
            if (name.at(i+1) == ' '){
            }
            else{
                initials += name.at(i+1);
            }
        }
    }
    return(initials);
}

//Task 3 implementation
bool task3(int age){
    if (age < 21){
        return(true);
    }
    return false;
}

//Task 4 implementation
bool task4(int num){
    if ((num % 2 == 1) || (num % 2 == -1)){
        return(true);
    }
    return(false);
}

//Task 5 implementation
int task5(int n){
    int total = 0;
    for (int i=0; i <= n; i++){
        total += i;
    }
    return(total);
}

//Task 6 implementation
int task6(int n){
    srand(0);
    int num;
    int flips = 0;
    int total = 0;
    while (total < n){
        num = rand();
        if (num%2 == 0){
            total+=1;
        }else{
            total = 0;
        }
        flips += 1;
    }
    return(flips);
}

//Task 7 implementation
int task7(int m, int n){
    int multiples = 0;
    for (int i = m; i<=n; i++){
        if (i % 10 == 0){
            multiples += 1;
        }
    }
    return(multiples);
}

//Task 8 implementation
string task8(string message, int m, int n){
    string word;
    for (int i = m; i <= n; i++){
        word += message.at(i);
    }
    return(word);
}

//Task 9 implementation
float task9(int a, int b, int c){
    float avg;
    avg = (a + b + c);
    avg = avg/3;
    return (avg);
}

//Task 10 implementation
float task10(float a, float b, float c){
    if (a > b) {
        if (a > c) {
            return(a);
        } else {
            return(c);
        }
    }else {
        if (b >c){
            return(b);
        }else{
            return(c);
        }
    }
}
