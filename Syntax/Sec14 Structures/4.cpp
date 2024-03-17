#include<iostream>
#include<vector>

using namespace std;

struct Employee {
    int id;
    string name;
};

int main() {
    Employee e4 {10, "tarek"};  // aggregate initialization
    /*
     An aggregate is a type that can be initialized with a brace-enclosed initializer list, such as arrays and
     structs (including classes with no user-provided constructors, no private or protected non-static data members,
     no base classes, and no virtual functions).
    */

    return 0;
}
