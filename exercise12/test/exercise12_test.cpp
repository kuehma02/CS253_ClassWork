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
    deque<int> testDeque1 = {11, 22, 33, 44};
    CHECK (contains(22, testDeque1.begin(), testDeque1.end()));
    CHECK_FALSE (contains(31, testDeque1.begin(), testDeque1.end()));

    deque<string> testDeque2 = {"CS", "253"};
    CHECK (contains("253", testDeque2.begin(), testDeque2.end()));
    CHECK_FALSE (contains("Hello", testDeque2.begin(), testDeque2.end()));
}

TEST_CASE ( "Test List", "[test4]" ) {
    /* Write an assertion here */
}

TEST_CASE ( "Test Stack", "[test5]" ) {
    /* Write an assertion here */
}

TEST_CASE ( "Test Queue", "[test6]" ) {
    /* Write an assertion here */
}

TEST_CASE ( "Test Priority Queue", "[test7]" ) {
    /* Write an assertion here */
}

TEST_CASE ( "Test Set", "[test8]" ) {
    /* Write an assertion here */
}

TEST_CASE ( "Test Map", "[test9]" ) {
    /* Write an assertion here */
}

TEST_CASE ( "Test Container", "[test10]" ) {
    /* Write an assertion here */
}