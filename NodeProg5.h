//
// Created by rodho on 3/10/2022.
//

#pragma once


class Node {
protected:
    int num;
    Node* next;
public:
    Node();
    Node(int);

    int getNum();

    void setNum(int);

    Node* getNext();

    void setNext(Node*);
};


