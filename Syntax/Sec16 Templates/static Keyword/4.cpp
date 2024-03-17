#include<iostream>
#include<vector>
using namespace std;
// Class objects as static
class Test{
    int i;
public:
    Test() {
        i = 0;
        cout << "Inside instructor\n";
    }
    ~Test() {
        cout << "Inside Destructor\n";
    }
};


int main() {
    int x = 0;

    if(x == 0) {
        static Test t;
    }
    cout << "End of main\n";

    //  the scope of static objects is throughout the lifetime of the program.

    return 0;
}
