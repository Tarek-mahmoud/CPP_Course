// Scope resolution operator
// 1) To access a global variable when there is a local variable with same name
#include <iostream>
using namespace std;

int x;  // global x

int main()
{
    int x = 10; // local x
    cout << "Value of global x = " << ::x << "\n";
    cout << "Value of local x = " << x << "\n";
    return 0;
}

