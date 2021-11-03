#ifndef DATASTRUCTURESASSIGNMENT2_PROBLEM2_H
#define DATASTRUCTURESASSIGNMENT2_PROBLEM2_H
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

#include <cstdint>
#include <vector>
#include <iostream>
class Problem2 {

public:
    Problem2(){

    }
    uint64_t countTheOnes(uint64_t binary_number);
    std::vector<double> isolateNegatives(std::vector<double> original, int index);
    void printAscendingDescending(int x, int y, std::ostream &os);
};


#endif //DATASTRUCTURESASSIGNMENT2_PROBLEM2_H
