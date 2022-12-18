//
// Created by karol on 12/15/2022.
//

#include "Stack.h"



template <typename T>
Stack<T>::Stack(int size) {
    data = new T[size];     // Decide how many elements can be stored in the stack
    top = -1;
}


template<typename T>
T Stack<T>::pop() {
    if (this->isEmpty()) {
        return -1;
    } else{
        return data[top--];
    }
}

template<typename T>
T Stack<T>::get_top() {
    return data[top];
}

template<typename T>
bool Stack<T>::isEmpty() {
   return top == -1;
}

template<typename T>
int Stack<T>::size() {
    return top + 1;
}

