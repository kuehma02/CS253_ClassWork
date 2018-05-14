#include "catch.hpp"
#include "../src/exercise12.cpp"
/* Test all functions here */

TEST_CASE ( "Test Array", "[test1]" ) {
    array<int, 4> testArr1 = {1, 2, 3, 4};
    CHECK (contains(2, testArr1.begin(), testArr1.end()));
    CHECK_FALSE (contains(33, testArr1.begin(), testArr1.end()));

    array<string, 2> testArr2 = {"Madeline", "Kuehn"};
    CHECK (contains("Kuehn", testArr2.begin(), testArr2.end()));
    CHECK_FALSE (contains("Nathan", testArr2.begin(), testArr2.end()));

}

TEST_CASE ( "Test Vector", "[test2]" ) {
    vector<string> testVec1 = {"Computer", "Science", "253"};
    CHECK (contains("Science", testVec1.begin(), testVec1.end()));
    CHECK_FALSE (contains("Mathematics", testVec1.begin(), testVec1.end()));

    vector<double> testVec2 = {1.1, 2.2, 5.5, 18.9};
    CHECK (contains(18.9, testVec2.begin(), testVec2.end())); 
    CHECK_FALSE (contains(3.0, testVec2.begin(), testVec2.end()));
}

TEST_CASE ( "Test Deque", "[test3]" ) {
    deque<int> testDeque1 = {15, 20, 5, 72};
    CHECK (contains(72, testDeque1.begin(), testDeque1.end()));
    CHECK_FALSE (contains(31, testDeque1.begin(), testDeque1.end()));

    deque<string> testDeque2 = {"Educations", "252"};
    CHECK (contains("252", testDeque2.begin(), testDeque2.end()));
    CHECK_FALSE (contains("CS", testDeque2.begin(), testDeque2.end()));
}

TEST_CASE ( "Test List", "[test4]" ) {
    list<int> testList1 = {22, 453, 64};
    CHECK (contains(453, testList1.begin(), testList1.end()));
    CHECK_FALSE (contains(33, testList1.begin(), testList1.end()));

    list<string> testList2 = {"Hi", "Everyone"};
    CHECK (contains("Everyone", testList2.begin(), testList2.end()));
    CHECK_FALSE (contains("Bye", testList2.begin(), testList2.end()));
}

TEST_CASE ( "Test Stack", "[test5]" ) {
    deque<int> testDeque1 = {1, 3, 5, 7, 8, 9};
    stack<int> testStack1(testDeque1);
    CHECK (isEmpty(testStack1) == false);
    CHECK_FALSE (isEmpty(testStack1));

    deque<int> testDeque2 = {};
    stack<int> testStack2(testDeque2);
    CHECK (isEmpty(testStack2));
    CHECK_FALSE (isEmpty(testStack2) == false);

}

TEST_CASE ( "Test Queue", "[test6]" ) {
    deque<string> testDeque1 = {"Samuel", "Stahl"};
    queue<string> testQueue1(testDeque1);
    CHECK (lastElement(testQueue1) == "Stahl");
    CHECK_FALSE (lastElement(testQueue1) == "Samuel");

    deque<double> testDeque2 = {3.14, 2.5, 9.7, 4.0};
    queue<double> testQueue2(testDeque2);
    CHECK (lastElement(testQueue2) == 4.0);
    CHECK_FALSE (lastElement(testQueue2) == 9.7); 
}

TEST_CASE ( "Test Priority Queue", "[test7]" ) {
    int test1[] = {8, 15, 27, 20, 99};
    priority_queue<int> testPq1(test1, test1+5);
    CHECK (topElement(testPq1) == 99);
    CHECK_FALSE (topElement(testPq1) == 15); 

    string test2[] = {"Carrot", "Apple", "Bananas", "Cake"};
    priority_queue<string> testPq2(test2, test2+4); 
    CHECK (topElement(testPq2) == "Carrot");
    CHECK_FALSE (topElement(testPq2) == "Apple");  
}

TEST_CASE ( "Test Set", "[test8]" ) {
    double test3[] = {1.1, 2.2, 3.3, 4.4};
    set<double> testSet1(test3, test3 + 4);
    CHECK (size(testSet1) == 4);
    CHECK_FALSE (size(testSet1) == 5);

    int test4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}; 
    set<int> testSet2(test4, test4 + 10);
    CHECK (size(testSet2) == 10);
    CHECK_FALSE (size(testSet2) == 9);
}

TEST_CASE ( "Test Map", "[test9]" ) {
    map<int, string> testMap1;
    testMap1[1] = "Madeline";
    testMap1[2] = "Esther";
    testMap1[3] = "Renee";
    testMap1[4] = "Kuehn";
    clearAll(testMap1);
    CHECK (testMap1.size() == 0); 
    CHECK_FALSE ((testMap1).size() == 1); 

    map<int, string> testMap2;
    testMap2[1] = "Joshua";
    testMap2[2] = "Palmer";
    testMap2[3] = "Kuehn";
    CHECK_FALSE ((testMap2).size() == 0); 
    clearAll(testMap2);
    CHECK ((testMap2).size() == 0);
}

TEST_CASE ( "Test Container", "[test10]" ) {
    forward_list<int> testFList1 = {8, 53, 64, 2, 37};
    CHECK (findFront(testFList1) == 8); 
    CHECK_FALSE (findFront(testFList1) == 64); 

    forward_list<double> testFList2 = {3.2, 5.3, 4.0, 1.2, 2.7}; 
    CHECK (findFront(testFList2) == 3.2);  
    CHECK_FALSE (findFront(testFList2) == 1.2);
    
    // Write another
}