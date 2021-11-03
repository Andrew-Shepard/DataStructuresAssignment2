#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../src/Queue.h"
/** Andrew Shepard
     *  Windows 10 Home
     *  All System information: https://i.imgur.com/wZOrk5I.png
     *  ming-w64
     *  clion 2021.2
     *  cmake 3.20 (FLAGS: -Wa, -mbig-obj) : https://i.imgur.com/9XhY5xF.png
     *  CPP 17
     *  Testing: catch2 2.13.7 https://github.com/catchorg/Catch2
     *  Full project and structure: https://github.com/Andrew-Shepard/DataStructuresAssignment2
     *  Repository will be made public after the submission date.
     * **/
TEST_CASE( "Constructor initializes to passed capacity", "[Initialize]" ) {
    int capacity = 100;
    Queue<double> localTestQueue(capacity);
    REQUIRE(100 == capacity);
}

TEST_CASE( "Enqueue adds the passed data & first returns the top", "[First][Public Function]" ) {
    double passed_data = 20;
    Queue<double> localTestQueue(100);
    localTestQueue.enqueue(passed_data);
    REQUIRE(*localTestQueue.first() == passed_data);
}

TEST_CASE( "Dequeue removes the last element", "[Bottom][Public Function]" ) {
    Queue<double> localTestQueue(200);
    for(int i = 0; i<100; i++){
        localTestQueue.enqueue(i);
    }
    double last_element = *localTestQueue.first();
    localTestQueue.dequeue();
    REQUIRE(*localTestQueue.first() != last_element);
}

TEST_CASE("Size returns the correct number of elements","[Public Function]"){
    Queue<double> localTestQueue(200);
    int queue_size = 100;
    for(int i = 1; i<=queue_size; i++){
        localTestQueue.enqueue(i);
    }
    REQUIRE(localTestQueue.size() == queue_size);
}

TEST_CASE("Print displays the expected string","[Public Function]"){
    Queue<double> localTestQueue(200);
    int queue_size = 3;
    for(int i = 0; i<=queue_size; i++){
        localTestQueue.enqueue(i);
    }

    std::string expected = "";
    for(int i = 0; i<=queue_size; i++){
        expected.append(std::to_string(i));
        expected += "\n";
    }
    std::ostringstream output;
    localTestQueue.print(output);
    REQUIRE(output.str() == expected);
}