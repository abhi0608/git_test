#include<iostream>

class Base{
    int b_var;
public:
    Base(){}
    Base(int var):b_var(var){}
    void print(){std::cout<<b_var<<std::endl;}
};

void fun(Base b)
{
    b.print();
}
int main()
{
    Base obj1(10); //normal call constructor
   
    Base obj2=20;  //implicit call constructor
  

    fun(obj1);  //normal call constructor
    fun(30);    //implicit call constructor
    return 0;
}