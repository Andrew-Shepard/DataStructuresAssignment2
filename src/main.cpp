#include <iostream>
#include "Stack.h"
#include "Queue.h"
int main() {
    double passed_data = 20;
    Stack<double> localTestStack(100);
    localTestStack.push(passed_data);
    std::cout << *localTestStack.top();
    localTestStack.print(std::cout);
}
