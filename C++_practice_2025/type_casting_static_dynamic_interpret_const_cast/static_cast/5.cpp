#include<iostream>
#include<string>

using namespace std;
class Base{};
class Derived:public Base{};

int main()
{
    Derived d1;
    Base *bp1=(Base*)&d1;  //allow at compile time
    Base *bp2=static_cast<Base*>(&d1); //allow at compile time beause inherit publicly
    
    return 0;
}