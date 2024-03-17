#include<iostream>
#include<vector>
using namespace std;
// static variables in a class
class Test{
public:
    static int i;    // Declaration of static member variable inside the class

    Test(){
        // Constructor definition
    }
};

int Test::i;   // Definition of the static member variable outside the class
// Static member variable definitions should be placed outside any member function

int main() {
    Test t1;
    Test t2;
    t1.i = 5;
    t2.i = 3;


    cout << t1.i << "\n"; // when you modify t1.i or access it through t1, you're actually modifying or accessing the static variable i associated with the class Test
    cout << Test::i << "\n"; //it's clearer and more conventional to use Test::i when accessing a static member variable,
                             // as it makes it explicit that you're accessing a variable associated with the class itself.
                             // This can help improve readability and maintainability of your code, especially for other developers who might be working with your code in the future.



    return 0;
}

