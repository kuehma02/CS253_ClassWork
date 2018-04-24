#include <bits/stdc++.h>

using namespace std;

struct Book {
  string title;
  string author;
  int pages;
};

struct Date {
  int day;
  int month;
  int year;
};

void today1(Date d) {
  d.day = 23;
  d.month = 4;
  d.year = 2018;
}

void today2(Date &d) {
  d.day = 23;
  d.month = 4;
  d.year = 2018;
}
int main() {
    Date *d4 = new Date{1, 4, 2018};
    today1(*d4);
    cout << (*d4).month <<(*d4).day << (*d4).year;


  return 0;
}
