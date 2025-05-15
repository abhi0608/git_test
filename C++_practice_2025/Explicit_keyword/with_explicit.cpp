#include<iostream>

class Base{
    int b_var;
public:
    Base(){}
    explicit Base(int var):b_var(var){}
    void print(){std::cout<<b_var<<std::endl;}
};

void fun(Base b)
{
    b.print();
}
int main()
{
    Base obj1(10); //normal call constructor allow
   
    Base obj2=20;  // Not allow implicit constructor becz explicit
  
    fun(obj1);  //normal call constructor allow
    fun(30);    // Not allow implicit constructor becz explicit
    return 0;
}