#include "exercise11.hpp"

/* Implement the required functions here */
long long fiboIte(long long iter){
    long previous = 1;
    long current = 1;
    long long next = 1;
    for (int i = 3; i <= iter; ++i) {
        next = current + previous;
        previous = current;
        current = next;
    }
    return next;
}

long long fiboRec(long long iter){
    if (iter == 0){
        return 0;
    }
    if (iter == 1) {
        return 1;
    } else {
        return fiboRec(iter-1)+fiboRec(iter-2);
    }
}

long long factIte(long long iter){
    long long result = 1;
    for (int i = 1; i <= iter; i++){
        result = result * i;
    }
    return result;
}

long long factRec(long long iter){
    if (iter == 0){
        return 1;
    }
    if (iter == 1){
        return 1;
    }else {
        return iter * factRec(iter - 1);
    }
}

string convert(long long num, int base){
    string s;
    while (num > 0){
        string bit;
        if (base == 16) {
            switch (num % base){
                case 10: bit = "A";
                        break;
                case 11: bit = "B";
                        break;
                case 12: bit = "C";
                        break;
                case 13: bit = "D";
                        break;
                case 14: bit = "E";
                        break;
                case 15: bit = "F";
                        break;
            }
        } else {
            int val = num % base;
            bit = to_string(val);
        }
        s = bit + s;
        num = num / base;
    }
    return s;
}

template <typename T>
T add3(T n1, T n2, T n3) {
    return n1 + n2 + n3;
}

template <typename T>
T addN(T n) {
    return n;
}

template <typename T, typename ... Targs>
T addN(T first, Targs ... others){
    return first + addN<T>(others ...);
}

template <typename T>
T max3(T n1, T n2, T n3){
    if (n1 > n2 && n1 > n3){
        return n1;
    }else{
        if (n2 > n1 && n2 > n3){
            return n2;
        }
        return n3;
    }
}

template <typename T>
T maxN(T n){
    return n;
}

template <typename T>
T maxN(T n1, T n2){
    if (n1 > n2){
        return n1;
    }
    return n2;
}

template <typename T, typename ...Targs>
T maxN(T first, Targs ... others){
    return maxN(others ...);
}

template <typename T>
int countN(T someValue) {
    return 1;
}

template <typename T, typename ... Targs>
int countN(T first, Targs ... others) {
    return 1 + countN(others ...);
}

template <typename T, typename ...Targs>
double avgN(T first, Targs ... others){
    double added = addN(first, others...);
    double total = countN(first, others...);
    double average = added / total;
    return average;
}