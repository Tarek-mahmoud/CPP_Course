// Scope resolution operator
// 2) To define a function outside a class.
#include <iostream>
using namespace std;

class A {
public:
    // only declaration
    void fun();
};

void A::fun() {
    cout << "fun() call\n";
}

int main()
{
    A a;
    a.fun();
    return 0;
}
