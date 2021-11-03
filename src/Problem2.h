//
// Created by andre on 11/2/2021.
//

#ifndef DATASTRUCTURESASSIGNMENT2_PROBLEM2_H
#define DATASTRUCTURESASSIGNMENT2_PROBLEM2_H


#include <cstdint>
#include <vector>
#include <iostream>
class Problem2 {

public:
    Problem2(){

    }
    uint64_t countTheOnes(uint64_t binary_number);
    std::vector<double> isolateNegatives(std::vector<double> original, int index);
    void printAscendingDescending(std::ostream &os);
};


#endif //DATASTRUCTURESASSIGNMENT2_PROBLEM2_H
