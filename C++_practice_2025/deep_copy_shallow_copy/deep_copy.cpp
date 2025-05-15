#include<iostream>

using namespace std;
class Dummy
{
    private:
        int a,b;
        int *p;
    public:
        void setData(int x,int y){a=x;b=y;}
        void showData(){cout<<"a="<<a<<"b="<<b;}
        Dummy(){ a=0;b=0;p=NULL;}
        Dummy(Dummy &d)
        {
            a=d.a;
            b=d.b; 
            p=new int;
            *p=*(d.p);
        }
        ~Dummy(){
            delete p;
        }
};
int main()
{
    Dummy d;
    d.setData(1,2);
    d.showData();
    Dummy d1=d;        //copy constructor will call
    d1.showData();
    return 0;
}
