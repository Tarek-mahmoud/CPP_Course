#include<iostream>
#include<vector>

// Initialization

using namespace std;

int main() {
    char arr1[] = "abcd";   // copy initialization
    char arr2[] = {"abcd"}; // copy initialization

    char arr3[] {"abcd"};   // Direct initialization(More efficient): this means that the "abcd" is constructed directly inside the array
    char arr4[] ("abcd");   // Direct initialization

    vector<int> v1 {1, 2, 3};
    //vector<int> v2 (1, 2, 3); // this is a function initialization

    int y {};   // value initialization

    double z = 10.5;
    int z1 = z;
    cout << z << " " << z1 << "\n\n";
    // int z2 {z}; error

    int x = 19;
    int x1 {x};
    cout << x << " " << x1 << "\n";
    cout << &x << " " << &x1 << "\n";

    x = 12;
    cout << x << " " << x1 << "\n";

    x1 = 7;
    cout << x << " " << x1 << "\n";

    return 0;
}
