#include <iostream>
#include "Stack.h"
#include "Queue.h"
int main() {
    Queue<double> kachorpa(42069);
    for(int i = 0; i<100; i++){
        kachorpa.enqueue(i);
    }
    kachorpa.dequeue();
    kachorpa.dequeue();
    kachorpa.dequeue();
    kachorpa.print();
}
