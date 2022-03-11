//
// Created by rodho on 3/10/2022.
//
#include "NodeProg5.h"

class LinkedList {
private:
    int num;
    Node* head;
public:
    LinkedList();
    LinkedList(int);

    void Add(int);

    void printList();
};