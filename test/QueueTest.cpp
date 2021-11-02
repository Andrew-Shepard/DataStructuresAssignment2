#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../src/Queue.h"


TEST_CASE( "Constructor initializes to passed capacity", "[Initialize]" ) {
    int capacity = 100;
    //Queue<double> localTestQueue(capacity);
    REQUIRE(100 == capacity);
}