/*
 * Assignment: Exercise 3
 * Author: Madeline Kuehn
 * Date: 2018-04-13
 */

#include "exercise3.hpp"

//Assuming the values in the array are grades (0-100), print number of students with 'A', 'B', 'C', 'D' and 'F'.
void task1(int grades[], int size) {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int f = 0;
    for (int i = 0; i < size; i++){
        int grade = grades[i];
        if (grade >=90){
            a += 1;
        }else if (grade >=80 && grade < 90){
            b += 1;
        }else if (grade >=70 && grade < 80){
            c += 1;
        }else if (grade >=60 && grade < 70){
            d += 1;
        }else if (grade >=0 && grade < 60){
            f += 1;
        }
    }
    cout << "A" << setw(5) << a << endl;
    cout << "B" << setw(5) << b << endl;
    cout << "C" << setw(5) << c << endl;
    cout << "D" << setw(5) << d << endl;
    cout << "F" << setw(5) << f << endl;
}

//Find the difference between 100 and the largest element of the array and add this difference to every element in the array. Note: after this function call the largest value in the array must be 100.
void task2(int grades[], int size) {
    int largest = 0;
    for (int i = 0; i < size; i++){
        if (grades[i] > largest) {
            largest = grades[i];
        }
    }
    int difference = 100 - largest;
    for (int i = 0; i < size; i++){
        grades[i] += difference;
    }
}

//Calculate and return sum of all elements in an array.
int task3(int array[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum;
}

//Check if a number is in an array and return true or false
bool task4(int array[], int size, int number) {
    for(int i = 0; i < size; i++){
        if (number == array[i]){
            return true;
        }
    }
    return false;
}

//Tell if letters of a word are ordered (ie. "buy" would return true, while "bye" - false).
bool task5(string aWord) {
    int wordLength = aWord.length();
    for(int i=0; i < wordLength; i ++){
        if (aWord[i] < aWord[i-1]){
            return false;
        }
    } 
    return true;
}

//Check if a number is in a vector and return true or false
bool task6(vector<int> list, int number) {
    int size  = list.size();
    for(int i=0; i < size; i++){
        if (list[i] == number){
            return true;
        }
    }
    return false;
}

//Create a vector of integers of ther specified size, initialize each element of the vector to a random number between 50 and 100, and return the vector.
vector<int> task7(int size) {
    vector<int> result(size, 0);
    for (int i = 0; i < size; i++){
         int n = (rand() % 50) + 50;
         result[i] = n;
    }
    return result;
}

//Return the number of values in the vector below the threshold.
int task8(vector<int> grades, int threshold) {
    int num_values = 0;
    int size = grades.size();
    for (int i = 0; i < size; i++){
        if (grades[i] < threshold) {
            num_values += 1;
        }
    }
    return num_values;
}

//Reverse the values in a vector.
vector<int> task9(vector<int> list) {
    vector<int> result;
    int size = list.size() -1;
    for (int i = size; i >= 0; i--){
        result.push_back(list[i]);
    }
    return result;
}

//Implement sieve of Eratosthenes and return a vector that contains all prime numbers between 1 and threshold.
vector<int> task10(int threshold) {
    vector<int> result;
    
    for (int i = 2; i < threshold; i++){
        bool isPrime = true;
        for (int p=2; p*p <= i; p++){
            if (i % p == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            result.push_back(i);
        }
    }
    return result;
}