// C++ Program to demonstrate the working of static data member
#include <iostream>
using namespace std;

class A {
public:
    A()
    {
        cout << "A's Constructor Called " <<
             endl;
    }
};

class B {
    static A a;

public:
    B()
    {
        cout << "B's Constructor Called " <<
             endl;
    }
};


// Driver code
int main()
{
    B b;
    /*
     * The above program calls only B’s constructor, it doesn’t call A’s constructor. The reason is,
     * Static members are only declared in a class declaration, not defined. They must be explicitly defined outside the class using the scope resolution operator.
     */
    return 0;
}
