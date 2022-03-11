
#include <iostream>
using namespace std;


int* foo(int *x) {
    int* arr;
    arr = new int[5];
    int r = *x;
    arr = r;
//    int* z = &x;
//    int y = 2;
//    z = z - y;
//    return z;
    return r;
}

int main() {
    int x [6];
    cout << "function called: " << foo(x) << endl;
    cout << "locally declared variable: " << x << endl;

    return 0;
}