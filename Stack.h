//
// Created by karol on 12/15/2022.
//

#ifndef DATASTRUCTURES_STACK_H
#define DATASTRUCTURES_STACK_H

template <typename T>
class Stack {
private:
    T * data;
    T * top;

public:
/*
push() to insert an element into the stack
pop() to remove an element from the stack
top() Returns the top element of the stack.
isEmpty() returns true if stack is empty else false.
size() returns the size of stack.
*/
    Stack(int size);
    void push(T value);
    T pop();
    T get_top();

    static bool isEmpty();
    static int size();
};


#endif //DATASTRUCTURES_STACK_H
