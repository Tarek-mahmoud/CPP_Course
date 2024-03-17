#include<iostream>
#include<vector>
using namespace std;
// Way 2: provide an instance of the class to work with
class Test{
public:
    int i;
    static void printMsg(Test &obj){
        cout << obj.i << "\n";
        obj.i++;
    }
};

int main() {
    Test obj;
    Test::printMsg(obj);
    Test::printMsg(obj);
    return 0;
}
