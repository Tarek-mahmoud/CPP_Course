#include<iostream>
#include<vector>
using namespace std;
// Static variables in a function
void demo() {
    static int i = 0;
    cout << i << "\n";
    i++;
}

int main() {
    demo();
    demo();
    demo();

    return 0;
}

