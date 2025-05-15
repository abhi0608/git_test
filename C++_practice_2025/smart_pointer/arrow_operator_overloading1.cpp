#include <iostream>
struct A 
{
    void foo() {std::cout << "Hi" << std::endl;}
};

struct B 
{
    A a;
    A* operator->() {
        return &a;
    }
};

int main() {
    B b;
    b->foo();
}