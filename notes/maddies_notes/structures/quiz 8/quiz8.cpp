#include "quiz8.hpp"
int main() {
  /* Code fragment here */

    //Date *d11 = Date();
    //cout << *d11 << endl;
  
    Person *p11 = new Person();
    cout << *(*p11).getDOB() << endl;

    Person p2 = Person("Charlie", new Date());
    cout << p2 << endl;

    Person *p3 =  new Person("Alice", new Date(1, 2, 1861));
    cout << p3 << endl;

    //Date d12 = new Date();
    //cout << d12 << endl;

    Date *d13 = new Date(15, 5, 1861);
    cout << *d13 << endl;

    // Person p4 = Person("Dave", Date());
    // cout << p4 << endl;

    Person *p5 =  new Person();
    cout << p5->getDOB()->getDay() << endl;

    Date d14 = Date();
    cout << d14 << endl;

    Person p6 = Person();
    cout << p6 << endl;

    return 0;
}