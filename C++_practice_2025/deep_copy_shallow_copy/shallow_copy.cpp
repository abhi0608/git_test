#include<iostream>

using namespace std;

class Dummy
{
    private:
        int a,b;
        
    public:
        void setData(int x,int y){a=x;b=y;}
        void showData(){cout<<"a="<<a<<"b="<<b;}
        Dummy(){ a=0;b=0;}
        Dummy(Dummy &d)
        {
            a=d.a;
            b=d.b; 
        }
        ~Dummy(){}
};
int main()
{
    Dummy d;
    d.setData(1,2);
    
    Dummy d1=d;        //copy constructor will call
    d1.showData();
    return 0;
}
