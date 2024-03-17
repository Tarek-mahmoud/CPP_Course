#include<iostream>
#include<vector>
using namespace std;

// using template
template<typename Type>
Type MyMax(Type a, Type b) {
    if (a > b)
        return a;
    return b;
}

struct Employee{};

int main() {
    cout << MyMax(2, 5) << "\n";    // Compiler performs type deduction based on the types of the arguments passed to the function. Since both arguments are integers (int), the compiler deduces that Type should also be int.
    cout << MyMax<int>(2, 5) << "\n";   // When you use MyMax<int>, you're telling the compiler to instantiate the template function with Type replaced by int.

    cout << MyMax('A', 'T') << "\n";

    // cout << MyMax(3, 4.5);   // the function template MyMax expects both arguments to be of the same type
    cout << MyMax<int>(3, 4.5) << "\n";
    cout << MyMax<double>(3, 4.5) << "\n";

    // cout << MyMax<Employee>(a, b); // the compiler won't know how to compare two Employee objects.

    return 0;
}
