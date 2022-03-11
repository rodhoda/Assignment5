

//Demonstrate an error where you perform a shallow copy of a pointer-based data structure
// (eg, linked list from assignment #4) when you really should be performing a deep copy.
// You can either demonstrate this through the values inadvertently changing, or by
// demonstrating errors when you call the destructor on both copies.

#include <iostream>
#include "Prog5.h"
using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
}
LinkedList::LinkedList(int newNum): num(newNum) {
    head = nullptr;
}

void LinkedList::Add(int newNum) {
    Node* newNode = new Node(newNum);
    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node* curNode = head;

        while (curNode != nullptr) {
            if (curNode->getNext() == nullptr) {
                curNode->setNext(newNode);
                break;
            }
            curNode = curNode->getNext();
        }
    }
}

void LinkedList::printList() {
    Node* curNode = head;
    cout << "List: ";
    while (curNode != nullptr) {
        cout << curNode->getNum() << " ";
        curNode = curNode->getNext();
    }
    cout << endl;
}

int main() {
    // This is an initial object of a linked list,
    // called L1
    LinkedList L1;
    L1.Add(5);
    L1.Add(3);

    L1.printList();

    // In an instance where you would want to
    // adopt the data from one object and build on it
    // with a new object, you would need to do a deep-copy
    // so that the data is not pointing to the same thing

    // L1 is shallow-copied to L2
    LinkedList L2 = L1;

    // Now, any change that would occur in L1,
    // would also be present in L2
    L1.Add(8);
    L2.printList();

    return 0;
}