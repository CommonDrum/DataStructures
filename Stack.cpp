//
// Created by karol on 12/15/2022.
//

#include "Stack.h"



template <typename T>
Stack<T>::Stack(int size) {
    data = new T[size];     // Decide how many elements can be stored in the stack
    top = data;
}


template<typename T>
T Stack<T>::pop() {
    return nullptr;
}

template<typename T>
T Stack<T>::get_top() {
    if(top == data){
        return true;
    }
    return false;
}

template<typename T>
bool Stack<T>::isEmpty() {
    return false;
}

template<typename T>
int Stack<T>::size() {
    return 0;
}

