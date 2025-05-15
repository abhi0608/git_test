#include<iostream>

using namespace std;
class Base{
    int _a,_b;
public:
    Base seta(int a){_a=a; return *this;}
    Base setb(int b){_b=b; return *this;}
    void print(){cout<<"a= "<<_a <<"b= "<< _b <<endl;}
};
int main()
{
    Base b;
    b.seta(5).setb(19).print();

    b.print();  // without reference it will give wrong result
    return 0;
}