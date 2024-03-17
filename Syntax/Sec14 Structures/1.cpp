#include<iostream>
#include<vector>

// Initialization

using namespace std;

int main() {
    int i1 = 42;
    int i2 = (42);
    int i3 = int();
    int i4 = {42};      //Initializer list
    int i5 = {};        // inits with 0
    int i6 = (7, 9);    // comma operator
    cout << i6 << "\n";
    cout << sizeof(i6);

    return 0;
}

