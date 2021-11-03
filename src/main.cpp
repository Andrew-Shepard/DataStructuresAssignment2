#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "Problem2.h"
int main() {
    Problem2 pro;
    std::vector<double> lolz;
    for (int i = -10; i <= 20; i++){
        lolz.push_back(i);
    }
    std::cout << "The vector elements are : ";

    for(int i=0; i < lolz.size(); i++)
        std::cout << lolz.at(i) << ' ';
    lolz = pro.isolateNegatives(lolz,0);
    std::cout << "The vector elements are : ";

    for(int i=0; i < lolz.size(); i++)
        std::cout << lolz.at(i) << ' ';
    return 0;
}
