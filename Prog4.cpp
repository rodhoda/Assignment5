
//Demonstrate an error where you fail to use a virtual destructor
// and you delete an object of an inherited class and it causes
// a memory leak or  unexpected behavior.

#include "NodeChild.h"
#include <iostream>

int main() {
    Node* newNode;
    NodeChild* newChildNode = new NodeChild(10,"userName");
    newNode->setNext(newChildNode);


    delete newChildNode;

    cout << newNode->getNext() << endl;
    return 0;
}