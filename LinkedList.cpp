//
// Created by karol on 20/11/22.
//

#include "LinkedList.h"


template<typename T>
void LinkedList<T>::add_node(T value) {
    tail->next = new node<T>{value};
    tail = tail->next;
}

template<typename T>
void LinkedList<T>::del_node(T value) {

}

//              GET/SET                \\

template<typename T>
node<T> LinkedList<T>::get_head() {
    return node<T>();
}

template<typename T>
T LinkedList<T>::get_val() {
    return nullptr;
}