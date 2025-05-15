#include<iostream>

using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<"\na="<<a<<"\nb="<<b;
        }

        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex,Complex);
        friend Complex operator*(Complex,Complex);
};
Complex operator+(Complex X,Complex Y)
{
    temp.a=X.a+Y.a;
    temp.b=X.b+X.b;
}
Complex operator-(Complex X,Complex Y)
{
    temp.a=X.a-Y.a;
    temp.b=X.b-X.b;
}
Complex operator*(Complex X,Complex Y)
{
    temp.a=X.a*Y.a-X.b*X.b;
    temp.b=X.a*Y.b+X.b*Y.a;
    return temp;
}
class Time{
    private:
        int hr,min,sec;
    public:
        void setTime(int a,int b,int c)
        {
            hr=a; min=b; sec=c;
        }
        void showTime()
        {
            cout<<"\n"<<hr<<":"<<min<<":"<<sec;
        }
        friend ostream& operator<<(ostream&,Time);
        friend istream& operator>>(istream&,Time&);
}
ostream& operator<<(ostream &dout,Time T)
{
    dout<<"\n"<<T.hr<<":"<<T.min<<":"<<T.sec;
    return dout;
}
istream& operator>>(istream &din,Time &T)
{
    din>>T.hr>>T.min>>T.sec;
    return din;
}

class Array{
private:
    int *p;
    int size;
public:
    Array operator=(const Array arr)
    {
        size=arr.size;
        p=new int[size];

        for(int i=0;i<size;i++)
        {
            p[i]=newarr.p[i];
        }
        return *this;
    }

    friend Array* operator+(Array a1,Array a2);
   
};
Array* operator+(Array a1,Array a2)
{
    Array *arrptr=new Array();
    arrptr->size=a1.size+a2.size;
    arrpre->p=new int[arrptr->size];
    int i,k=0;
    for(i=0;k=0;i<a1->size;i++,k++)
    {
        arrptr->p[i]=a1.p[i];
    }
    for(i=0;i<a2->size;i++,k++)
    {
        arrptr->p[i]=a2.p[i];
    }
    return arrptr;
}

int main()
{

    return 0;
}