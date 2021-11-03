#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../src/Problem2.h"
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
TEST_CASE( "Count the ones counts the number of ones in a binary" ) {
    Problem2 pro;
    uint64_t test_number = 11111101;

    REQUIRE(pro.countTheOnes(test_number) == 7);
}
TEST_CASE( "Isolate Negatives does not return positive numbers" ) {
    Problem2 pro;
    std::vector<double> v(500);
    for (int i = -20; i < 200; i++){
        v.push_back(i);
    }
    v = pro.isolateNegatives(v,0);
    bool contains_positive = false;
    for (int i = 0; i < v.size(); i++) {
        if (v.at(i) >= 0) {
            contains_positive = true;
        }
    }
    REQUIRE_FALSE(contains_positive);
}

TEST_CASE("printAscendingDescending prints expected"){
    Problem2 pro;
    std::ostringstream os;
    int start = 0; int end = 20;
    pro.printAscendingDescending(start,end,os);

    std::string expected = "";
    for (int i = start; i <= end; i++){
        expected.append(std::to_string(i)+" ");
    }
    for (int i = end-1; i >= start; i--){
        expected.append(std::to_string(i)+" ");
    }

    REQUIRE(expected == os.str());
}

