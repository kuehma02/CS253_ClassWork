// #include "structures.hpp"

// int main() {
//     cout << "Hello and Welcome to Structures!" << endl;
//     Book book1;
//     // cout << book1.title << " by " << book1.author << " has " << book1.pages << " pages and costs " << fixed << setprecision(2) << book1.price << endl;

//     book1.title = "C++ Today";
//     book1.author = "Bjarne Stroustrup";
//     book1.pages = 1000;
//     book1.price = 2.53999;

//     // cout << book1.title << " by " << book1.author << " has " << book1.pages << " pages and costs " << fixed << setprecision(2) << book1.price << endl;


//     cout << endl << "My Library" << endl;
//     vector<Book> library = vector<Book>();
//     library.push_back(book1);
//     for (int b = 0; b < library.size(); b++) { //(Book b: library)
//         cout << book1.title << " by " << book1.author << " has " << book1.pages << " pages and costs " << fixed << setprecision(2) << book1.price << endl;
//     }

//     Book *book2 = new Book;
//     book2->title = "C++ Tomorrow";  // way 1
//     (*book2).author = "Roman Yasinovskyy";// way 2
//     book2->pages = 2;
//     book2->price = 253;

//     cout << book2->title << " by " << book2->author << " has " << book2->pages << " pages and costs " << fixed << setprecision(2) << book2->price << endl;

//     delete book2;

//     //need to get c++11
//     Book book3 = Book{"C++ The Day After Tommorrow", "Unknown", 100, .99};
//     cout << book3.title << " by " << book3.author << " has " << book3.pages << " pages and costs " << fixed << setprecision(2) << book3.price << endl;

//     Book *book4 = new Book{"Python Forever!", "students", 10000, 10.99};
//     cout << (*book4).title << " by " << (*book4).author << " has " << (*book4).pages << " pages and costs " << fixed << setprecision(2) << (*book4).price << endl;

//     return 0;
// }