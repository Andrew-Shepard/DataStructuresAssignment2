//
// Created by andre on 10/31/2021.
//

#ifndef DATASTRUCTURESASSIGNMENT2_QUEUE_H
#define DATASTRUCTURESASSIGNMENT2_QUEUE_H
#include <iostream>
#include <vector>
template<typename T>
class Queue {
    T *queue = nullptr;
    T *first = nullptr;
    T *last = nullptr;
    std::vector<T> *elements = nullptr;
    uint64_t length = 0;
    size_t capacity = 0;
public:
    Queue(){
    }
    Queue(uint64_t capacity){
        this->capacity = capacity;
        elements = new std::vector<T>(capacity);
        queue = &elements->front();
        first = last = queue;
    }

    void enqueue(T data) {
        if (length == capacity){
            return;
        }

        length++;

        *last = data;

        if (last != &(elements->back())) {
            last++;
        }else{
            last = queue;
        }


    }

    void dequeue(){
        //Removes the last element in the queue
        if (length == 0){
            return;
        }
        last--;
        length--;
    }

    T top(){
        return first;
    }

    void clear() {
        first = queue;
        length = 0;
    }

    uint64_t getLength() {
        return length;
    }

    void increaseCapacity(size_t capacity){
        elements->reserve(capacity);
    }

    void print() {
        std::vector<T> *p = elements;
        for (uint64_t i = 0; i < length; i++) {
            std::cout << p->at(i) << std::endl;
        }
    }

    ~Queue() {
        elements->clear();
        delete elements;
    }

};
#endif //DATASTRUCTURESASSIGNMENT2_QUEUE_H
