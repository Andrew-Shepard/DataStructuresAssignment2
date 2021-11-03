//
// Created by andre on 10/31/2021.
//

#ifndef DATASTRUCTURESASSIGNMENT2_STACK_H
#define DATASTRUCTURESASSIGNMENT2_STACK_H

#include <iostream>
#include <vector>
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
template<typename T>
class Stack {
    T *stack = nullptr;
    T *first = nullptr;
    T *top_of_stack = nullptr;
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
        top_of_stack = first;
        *first = data;

        if (first != &(elements->back())) {
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
            top_of_stack--;
        }
        else{
            first = stack;
        }
    }

    T* top(){
        return top_of_stack;
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
