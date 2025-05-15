/*use for all upcast but never use for down cast*/
#include<iostream>
#include<string>

using namespace std;
class base{};
class Derived1:public Base{};
class Derived2:public Base{};

int main()
{
    Derived1 d1;
    Derived2 d2;

    Base *bp1=static_cast<Base*>(&d1);
    Base *bp2=static_cast<Base*>(&d2);

    return 0;
}