// C++ program to demonstrate all 5 member functions
// :Destructor, Copy Constructor, Copy Assignment Operator,
// Move Constructor, and Move Assignment Operator.

#include <iostream>
#include <utility> // for using move
using namespace std;

class ResourceManager {
private:
    int* data;
    size_t size;

public:
    // default constructor
    ResourceManager(size_t sz = 0)
        : data(new int[sz])
        , size(sz)
    {
        cout << "Default Constructor is called" << endl;
    }

    // Destructor
    ~ResourceManager()
    {
        delete[] data;
        cout << "Destructor is called" << endl;
    }

    // Copy Constructor
    ResourceManager(const ResourceManager& other)
        : data(new int[other.size])
        , size(other.size)
    {
        copy(other.data, other.data + other.size, data);
        cout << "Copy Constructor is called" << endl;
    }

    // Copy Assignment Operator
    ResourceManager& operator=(const ResourceManager& other)
    {
        if (this != &other) {
            delete[] data;
            data = new int[other.size];
            size = other.size;
            copy(other.data, other.data + other.size, data);
        }
        cout << "Copy Assignment Operator is called"
             << endl;
        return *this;
    }

    // Move Constructor:- Move Constructor is one of the member functions that is used to transfer the ownership of resources
    // from one object to another. This job can easily be done by this move constructor by using a temporary object called rvalue
    ResourceManager(ResourceManager&& other) noexcept   //noexcept:-noexcept” is not a function name but a specifier in C++, does not throw any exceptions
        : data(other.data),
          size(other.size)
    {
        other.data = nullptr;
        other.size = 0;
        cout << "Move Constructor" << endl;
    }

    // Move Assignment Operator:-  The Move Assignment Operator is comparable to the Move Constructor. It is used when an existing object is assigned
    // the value of an rvalue. It is activated when you use the assignment operator (=) to assign the data of a temporary object(value) to an existing object.
    ResourceManager&
    operator=(ResourceManager&& other) noexcept
    {
        if (this != &other) {
            delete[] data;
            data = other.data;
            size = other.size;
            other.data = nullptr;
            other.size = 0;
        }
        cout << "Move Assignment Operator" << endl;
        return *this;
    }
};

int main()
{
    // Creating an object using default constructor
    ResourceManager obj1(5);

    // Creating an object using Copy constructor

    ResourceManager obj2 = obj1;

    // Creating an object using Copy assignment operator
    ResourceManager obj3;
    obj3 = obj1;

    // Creating an object using Move constructor
    ResourceManager obj4 = move(obj1);

    // Creating an object using Move assignment operator
    ResourceManager obj5;
    obj5 = move(obj2);

    return 0;
}
