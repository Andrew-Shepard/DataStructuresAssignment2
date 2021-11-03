#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "Problem2.h"
int main() {
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
    double passed_data = 20;
    Stack<double> localTestStack(100);
    localTestStack.push(passed_data);localTestStack.push(passed_data);localTestStack.push(passed_data);
    std::cout << *localTestStack.top() << std::endl;
    localTestStack.print(std::cout);
    return 0;
}
