#include<iostream>
#include<vector>

// Initialization
using namespace std;

struct Employee {
    int id;     // default initialization
    string name;    // default initialization
};

int main() {
    Employee e1;    // default initialization
    Employee e2();  // function
    Employee e3{};  // value initialization

    Employee();     // Function
    Employee{};     // value initialization
    Employee{3, "amina"};     // create temporary objects which are immediately destroyed.

    Employee e4 {10, "tarek"};

    return 0;
}
