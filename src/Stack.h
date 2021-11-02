//
// Created by andre on 10/31/2021.
//

#ifndef DATASTRUCTURESASSIGNMENT2_STACK_H
#define DATASTRUCTURESASSIGNMENT2_STACK_H

#include <iostream>
#include <vector>
template<typename T>
class Stack {
    T *stack = nullptr;
    T *first = nullptr;
    std::vector<T> *elements = nullptr;
    uint64_t length = 0;
    size_t capacity = 0;
public:
    Stack(){
    }
    Stack(uint64_t capacity){
        this->capacity = capacity;
        elements = new std::vector<T>(capacity);
        stack = &elements->front();
        first = stack;
    }

    void push(T data) {
        if (length == capacity){
            return;
        }

        length++;

        *first = data;

        if (first != &(elements->front())) {
            first++;
        }else{
            first = stack;
        }


    }

    void pop(){
        //Moves the focused element to the next in the stack
        if (length == 0){
            return;
        }
        length--;
        if(first != &(elements->front())){
            first--;
        }
        else{
            first = stack;
        }
    }

    T* top(){
        return first;
    }

    uint64_t size() {
        return length;
    }


    void print(std::ostream &os) {
        std::vector<T> *p = elements;
        for (uint64_t i = 0; i < length; i++) {
            os << p->at(i) << std::endl;
        }
    }

    ~Stack() {
        elements->clear();
        delete elements;
    }

};


#endif //DATASTRUCTURESASSIGNMENT2_STACK_H
