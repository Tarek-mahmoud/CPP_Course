#include <iostream>
#include <string>
using namespace std;

class MyClass {
private:
    static int staticData; // Static data member

public:
    int nonStaticData; // Non-static data member

    // Constructor to initialize non-static data member
    MyClass(int data) : nonStaticData(data) {}

    // Benefit 1: No Object Instance Required
    static void staticFunction() {
        cout << "Static function called\n";
    }

    // Benefit 2: Access to Static Data Members
    static void printStaticData() {
        cout << "Static Data: " << staticData << endl;
    }

    // Benefit 3: Namespace Scope
    static void namespaceScopeExample() {
        // This function is part of MyClass's scope
        // No risk of name clashes in global namespace
    }

    // Benefit 4: Efficiency
    static void efficientFunction() {
        // Static member functions don't require object instantiation
        // No overhead of creating or destroying objects
    }

    // Benefit 5: Encapsulation
    static void setStaticData(int data) {
        staticData = data;
    }

    // Helper function that operates on class-level data
    static int calculateSum(int a, int b) {
        return a + b + staticData;
    }
};

// Definition of static data member
int MyClass::staticData = 0;

int main() {
    // Benefit 1: No Object Instance Required
    MyClass::staticFunction();

    // Benefit 2: Access to Static Data Members
    MyClass::setStaticData(42);
    MyClass::printStaticData();

    // Benefit 3: Namespace Scope
    MyClass::namespaceScopeExample();

    // Benefit 4: Efficiency
    MyClass::efficientFunction();

    // Benefit 5: Encapsulation
    int sum = MyClass::calculateSum(10, 20);
    cout << "Sum: " << sum << endl;

    return 0;
}
