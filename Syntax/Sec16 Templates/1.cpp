#include<iostream>
#include<vector>
using namespace std;

// Standard way

int max(int a, int b) {
    if (a > b)
        return a;

    return b;
}

double max(double a, double b) {
    if (a > b)
        return a;

    return b;
}

int main() {
    cout << max(3, 5) << "\n";
    cout << max(4.2, 1.7) << "\n";

    return 0;
}

