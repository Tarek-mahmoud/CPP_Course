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
        Test t;
    }
    cout << "End of main\n";

    return 0;
}
