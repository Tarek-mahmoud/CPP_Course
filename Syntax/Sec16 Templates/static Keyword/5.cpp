#include<iostream>
#include<vector>
using namespace std;
// Static functions in a class
class Test {
public:
    static void printMsg() {
        cout << "Welcome to ramadan\n";
    }
};


int main() {
    Test::printMsg();

    return 0;
}
