
#include "NodeProg5.h"

Node::Node() {}

Node::Node(int newNum): num(newNum), next(nullptr) {};

int Node::getNum() {
    return num;
}

void Node::setNum(int newNum) {
    num = newNum;
}

Node* Node::getNext() {
    return next;
}

void Node::setNext(Node *newNode) {
    next = newNode;
}
