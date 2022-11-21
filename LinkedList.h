//
// Created by karol on 20/11/22.
//

#ifndef DATASTRUCTURES_LINKEDLIST_H
#define DATASTRUCTURES_LINKEDLIST_H


template <typename T>
struct node{
    T value;
    T * next = nullptr;
};

template <typename T>
class LinkedList {
private:
    node<T> * head;
    node<T> * tail;
public:
    void add_node(T value);
    void del_node(T value);
    static T get_val();
    static node<T> get_head();

};




#endif //DATASTRUCTURES_LINKEDLIST_H
