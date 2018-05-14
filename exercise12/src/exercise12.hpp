/*
 * Assignment: Exercise 12
 * Author: Roman Yasinovskyy
 * Date: 2018-05-10
 */
#ifndef EXERCISE12_H
#define EXERCISE12_H

#include <bits/stdc++.h>

using namespace std;

// Declare a function that uses an array.
// Declare a function that uses a vector.
// Declare a function that uses a deque.
// Declare a function that uses a list.
template <class Iter, class T>
bool contains(T value, Iter start, Iter stop);

// Declare a function that uses a stack.
template <class T>
bool isEmpty(stack<T>&);

// Declare a function that uses a queue.
template <class T>
T lastElement(queue<T>&);

// Declare a function that uses a priority_queue.
template <class T>
T topElement(priority_queue<T>&); 

// Declare a function that uses a set.
template <class T, class U>
T clearAll(map<T, U>&); 

// Declare a function that uses a map.

// Declare a function that uses any other container.
template <class T>
T findFront(forward_list<T>&); 

#endif
