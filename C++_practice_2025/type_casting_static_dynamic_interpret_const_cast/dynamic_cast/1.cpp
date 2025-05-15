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
    
    Derived2 *dp2=dynamic_cast<Derived2*>(bp);//>*dp2 will be nuLL because  wrong casting from bp which is holding d1 object
                                            //which is drive1.Doing casting for dp2 which is Derived2 type.
    if(dp2==nullptr)
        cout<<"NULL"<<endl;
    else    
        cout<<"not NULL"<<endl;
    return 0;
}