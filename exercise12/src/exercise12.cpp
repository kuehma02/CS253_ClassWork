#include "exercise12.hpp"

// Define a function that uses an array.
// Define a function that uses a vector.
// Define a function that uses a deque.
// Define a function that uses a list.
template <class Iter, class T>
bool contains(T value, Iter start, Iter stop) {
    for (Iter it = start; it != stop; it++) {
        if (*it == value) {
            return true;
        }
    }
    return false;
}
// Define a function that uses a stack.
template <class T>
bool isEmpty(stack<T>& s) {
    return s.empty();
}

// Define a function that uses a queue.
template <class T>
T lastElement(queue<T>& q ) {
    return q.back(); 
}

// Define a function that uses a priority_queue.
template <class T>
T topElement(priority_queue<T>& pq) {
    return pq.top();
}

// Define a function that uses a set.
template <class T>
int size(set<T>& set) {
    return set.size();
}

// Define a function that uses a map.
template <class T, class U>
void clearAll(map<T, U>& m) {
    m.clear();
}

// Define a function that uses any other container.
template <class T>
T findFront(forward_list<T>& lst) {
    return lst.front();
}

