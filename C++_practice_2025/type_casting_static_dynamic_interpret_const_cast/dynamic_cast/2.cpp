#include<iostream>

using namespace std;
class Base{
    virtual void print(){cout<<"Base"<<endl;}  //dynamic cast should have atleast one virtual function in base
};
class Derived1:public Base{
    void print(){cout<<"Derived1"<<endl;}
};
class Derived2:public Base{
    void print(){cout<<"Derived2"<<endl;}
};
int main()
{
    Derived1 d1;
    Base *bp=dynamic_cast<Base*>(&d1);
    
    Derived1 *dp1=dynamic_cast<Derived1*>(bp);   //correct 1
     if(dp1==nullptr)
        cout<<"NULL"<<endl;
    else    
        cout<<"not NULL"<<endl;
    return 0;
}