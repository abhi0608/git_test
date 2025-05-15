// C++ Program to show how to Overload the Arrow Operator
#include <iostream>
using namespace std;

class MyClass {
public:
    int data;

    MyClass(int value) : data(value){}

    // Overloading the arrow operator
    MyClass* operator->()
    {
        // Returning a pointer to the object
        // itself
        return this;
    }
};

int main()
{
    MyClass obj(42);

    // Accessing the member 'data' using the arrow operator
    cout << "Using arrow operator: " << obj->data << endl;

    // Equivalent to the above, just demonstrating the
    // overloaded arrow operator
    cout << "Direct access: " << obj.data << endl;

    return 0;
}