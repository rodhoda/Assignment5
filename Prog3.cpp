

// Demonstrate an error where you reference a deleted memory location.
// Show that the value is changed inadvertently by another variable.

#include <iostream>
using namespace std;

int main() {
    int* ptrToBeDeleted = new int;
    *ptrToBeDeleted = 6;
    cout << *ptrToBeDeleted << endl;
    delete ptrToBeDeleted;

    int* aPtr = new int;
    *aPtr = 9;

    cout << *aPtr << endl;
    cout << *ptrToBeDeleted << endl;
    return 0;
}