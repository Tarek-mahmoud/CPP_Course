#include<iostream>
#include<vector>
using namespace std;
// Way 1: make i static var
class Test{
public:
    static int i;
    static void printMsg(){
        cout << i << "\n";
        i++;
    }
};

int Test::i;

int main() {
    Test::printMsg();
    Test::printMsg();
    return 0;
}
