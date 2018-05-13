// #ifndef QUIZ9_H
// #define QUIZ9_H

// #include <bits/stdc++.h>

// using namespace std;

// class Bar {
//     protected:
//         int x;
//         string y;
//     public:
//         Bar() { x = 253; y = "CS"; };
//         Bar(int i, string s) { x = i; y = s; };

//         int getX() { return x; }
//         string getY() { return y; }

//         friend ostream& operator<<(ostream&, const Bar&);
// };

// ostream& operator<<(ostream & os, const Bar& b) {
//     os << b.y << "-" << b.x;
//     return os;
// }

// class Foo: public Bar {
//     private:
//         double z;
//     public:
//         Foo() : Bar(), z(2) { };
//         Foo(int i, string s, double d) : Bar(i, s), z(d) { };

//         double getZ() { return z; }

//         friend ostream& operator<<(ostream&, const Foo&);
// };

// ostream& operator<<(ostream & os, const Foo& f) {
//     os << f.y << "-" << f.x << fixed << setprecision(2) << " (" << f.z << ")";
//     return os;
// }

// class Buzz: public Bar {
//     private:
//         char w;
//     public:
//         Buzz() : Bar(), w('A') { };
//         Buzz(int i, string s, char c) : Bar(i, s), w(c) { };

//         char getW() { return w; }

//         friend ostream& operator<<(ostream &, const Buzz&);
// };

// ostream& operator<<(ostream & os, const Buzz& b) {
//     os << b.y << "-" << b.x << "-" << b.w;
//     return os;
// }

// #endif

#ifndef QUIZ10_H
#define QUIZ10_H

#include <bits/stdc++.h>

using namespace std;

template <class T>
void mangle(T t) {
    cout << t << ' ';
}

void mangle(bool t) {
    cout << boolalpha << t << ' ';
}

template <class T>
void greatUnknown(vector<T> v) {
    for (T item : v) {
        mangle(item);
    }
}

template <class T>
void greatPuzzle(vector<T> v) {
    for (typename vector<T>::iterator it = v.end(); it != v.begin(); ) {
        it--;
        mangle(*it);
    }
}

template <class T>
T mystery(vector<T> v) {
    return v.at(v.size() / 2);
}

template <class T>
class Foo {
    private:
        T foo;
    public:
        Foo(T foo) { this->foo = foo; }

        T boo() { return this->foo; }
        T hoo(T foo) { return this->foo = foo; }

        friend ostream& operator<<(ostream& os, const Foo& f) { os << f.foo; return os; }
};


#endif