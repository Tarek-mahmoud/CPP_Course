// Scope resolution operator
// 3) To access a class’s static variables.
// 4) In case of multiple Inheritance
#include <iostream>
using namespace std;

class A
{
protected:
    int x;
public:
    A() { x = 10; }
};

class B
{
protected:
    int x;
public:
    B() { x = 20; }
};

class C: public A, public B
{
public:
    void fun()
    {
        cout << "A's x is " << A::x;
        cout << "\nB's x is " << B::x;
    }
};

int main()
{
    C c;
    c.fun();
    return 0;
}
