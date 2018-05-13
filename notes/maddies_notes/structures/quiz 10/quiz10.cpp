// #include "quiz10.hpp"

// int main() {
//     Bar *b3;
//     cout << b3;
    
//     vector<Foo> f13;
//     f13.push_back(Foo(1, "hi", 2.7));
//     //cout << f13.at(0);

//     Foo f8(25, "Test", 2.7);
//     Foo *f8ptr = &f8;
//     //cout << *f8ptr;

//     Bar b6(250, "Hello");
//     cout << endl << b6<<endl;

//     Buzz *b5 = new Buzz(42, "Answer", '@');
//     cout<< (const Bar&)b5 << endl;

//     Foo f4;
//     //cout << f4<< endl;

//     vector<Bar*> f15;
//     f15.push_back(new Foo(100, "PHI", 1.8));
//     //cout << f15.at(0)->getY();

    



//     return 0;

    
// }

#include "quiz10.hpp"
int main() {
    vector<int> v4 = vector<int>(5);
    const char* puzzle4 = "Luther";
    for (int i =0; i<5; i++){
        v4[i]= (int)(*puzzle4+i);
    }
    greatUnknown(v4);





  return 0;
}