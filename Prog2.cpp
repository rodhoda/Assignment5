


// Demonstrate an error where there is a memory leak
// in a loop that causes the program to crash or be '
// killed off by the OS.

#include <iostream>

using namespace std;

void foo(int x) {
    for (int i = 0; i < x, i++;)
        // for loop initializes a new int pointer
        int* aPtr = new int;

    // However, it was not deleted before the function
    // exited, causing a memory leak
    return;
}

// In order to fix the memory leak, the dynamically allocated
// memory must be deleted and assigned null to free up the space
// before the function exits.

int main() {
    int i = 5;
    //Function with an arbitrary argument sent through
    foo(5);

    return 0;
}