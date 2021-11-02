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
    T *first_in_queue = nullptr;
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
        first_in_queue = last = queue;
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

        length--;
        if (first_in_queue != &(elements->back())){
            first_in_queue++;
        }
        else{
            first_in_queue = &(elements->front());
        }
    }

    T* first(){
        return first_in_queue;
    }

    uint64_t size() {
        return length;
    }

    void print(std::ostream &os) {
        T *p = first_in_queue;
        for (uint64_t i = 0; i < length; i++) {
            os << *p << std::endl;
            if (p != &queue[capacity - 1]) {
                p++;
            } else {
                p = queue;
            }
        }
    }

    ~Queue() {
        elements->clear();
        delete elements;
    }

};
#endif //DATASTRUCTURESASSIGNMENT2_QUEUE_H
