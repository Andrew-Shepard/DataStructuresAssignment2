#include "Problem2.h"
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
uint64_t Problem2::countTheOnes(uint64_t binary_number){
    //1111101
    uint64_t ones = 0;
    //check either the left hand side or the right hand side
    std::string binary_number_string = std::to_string(binary_number);
    double checked_number = std::stod(binary_number_string.substr(0,1));
    //if it is a one
    if(checked_number = 1){
        //add one to ones
        ones++;
    }

    //if there is numbers left
    binary_number_string = binary_number_string.substr(1,binary_number_string.length());
    if(binary_number_string.length() > 0){
        //run the function with the number without the checked number
        ones += countTheOnes(std::stod(binary_number_string));
    }

    //return the ones
    return ones;
}

std::vector<double> Problem2::isolateNegatives(std::vector<double> original, int index){
    //if the index exceeds the original's size
    if (index >= original.size()){
        //return original
        return original;
    }
    //if the index number is negative
    if(original[index] < 0){
        index++;
    }else {//if the index number is positive
        //pop the indexed element
        original.erase(original.begin()+index);
    }
    //isolate ( orignal , index )
    return isolateNegatives(original,index);
}

void Problem2::printAscendingDescending(int x , int y, std::ostream &os){
    //if x is less than y
    if (x <= y){
        //print x
        os << x << " ";
        //call recursively with the new x
        printAscendingDescending(x+1,y,os);
    } else {
        return;
    }
    if (x < y){
        os << x << " ";
    }
}