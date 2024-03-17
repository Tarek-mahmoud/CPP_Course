#include<iostream>
#include<vector>
using namespace std;

template<typename Type1, typename Type2>
Type1 sum(Type1 a, Type2 b) {
    Type1 c = a + b;
    return c;
}
int main() {
    cout << sum(2, 3) << "\n";
    cout << sum(2, 3.5) << "\n";
    cout << sum(3.5, 2) << "\n";
    cout << sum(1.25, 2.5) << "\n";

    cout << sum(1, 'A') << "\n";
    cout << sum('A', 1) << "\n";
    //cout << sum("I am", " Tarek") << "\n"; // this is arr of chars using char pointer
    cout << sum(string("I am"), string(" Tarek")) << "\n";

    return 0;
}
