#include<iostream>
#include<vector>
using namespace std;
// Static function in a class
class Test{
public:
    int i = 0;
    static void printMsg(){
        cout << i << "\n";
        i++;
    }
    // Static member functions in C++ cannot access non-static member variables directly because they are not associated with any particular instance of the class.

    // To fix the error, you can either make i static or change your approach to access it
};

int main() {
    Test::printMsg();
    Test::printMsg();
    return 0;
}

