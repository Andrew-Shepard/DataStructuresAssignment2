#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../src/Stack.h"

TEST_CASE( "Constructor initializes to passed capacity", "[Initialize]" ) {
    int capacity = 100;
    Stack<double> localTestStack(capacity);
    REQUIRE(100 == capacity);
}

TEST_CASE( "Push adds the passed data & top returns the top", "[First][Public Function]" ) {
    double passed_data = 20;
    Stack<double> localTestStack(100);
    localTestStack.push(passed_data);
    REQUIRE(*localTestStack.top() == passed_data);
}

TEST_CASE( "Pop removes the last element", "[Bottom][Public Function]" ) {
    Stack<double> localTestStack(200);
    for(int i = 0; i<100; i++){
        localTestStack.push(i);
    }
    double last_element = *localTestStack.top();
    localTestStack.pop();
    REQUIRE(*localTestStack.top() != last_element);
}

TEST_CASE("Size returns the correct number of elements","[Public Function]"){
    Stack<double> localTestStack(200);
    int stack_size = 100;
    for(int i = 1; i<=stack_size; i++){
        localTestStack.push(i);
    }
    REQUIRE(localTestStack.size() == stack_size);
}

TEST_CASE("Print displays the expected string","[Public Function]"){
    Stack<double> localTestStack(200);
    int stack_size = 3;
    for(int i = 0; i<=stack_size; i++){
        localTestStack.push(i);
    }

    std::string expected = "";
    for(int i = 0; i<=stack_size; i++){
        expected.append(std::to_string(i));
        expected += "\n";
    }
    std::ostringstream output;
    localTestStack.print(output);
    REQUIRE(output.str() == expected);
}
