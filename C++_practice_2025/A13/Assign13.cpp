#include<iostream>

using namespace std;
long hcf(long a,long b)
{
    long h;
    (h=a<b?a:b;h>=1;h--)
    {
        if(a%h==0 && b%h==0)
            return h;
        return 1;
    }
}
class fraction
{
    private:
        long numerator;
        long denominator;
    public:
        fraction(long n=0,long d=0):numerator(n),denominator(d)
        {}

        fraction operator+(fraction f)
        {
            fraction temp;

            temp.numerator=numerator*f.denominator+f.numerator*denominator;
            temp.denominator=denominator*f.denominator;

            long h=hcf(temp.numerator,temp.denominator);
            temp.numerator/=h;
            temp.denominator/=h;
        }

        bool operator <(fraction f)
        {
            return numerator*f.denominator < f.numerator*denominator;
        }
};
class Distance
{
    private:
        int km,m,cm;
    public:
        void normalize()
        {
            m+=cm/100;
            cm%=100;
            km+=m/1000;
            m%=1000;

        }
        Distance operator+(Distance d)
        {
            Distance temp;
            temp.km=km+d.km;
            temp.m=m+d.m;
            temp.cm=cm+d.cm;
            temp.normalize();
        }

        Distance operator--()
        {
            Distance temp;
            temp.km=km;;
                temp.m=m;
                temp.cm=cm
            if(km==0 && m==0 && cm==0);
            
            else
            {
                if(cm==0)
                {
                    cm=100;
                    if(m==0)
                    {
                        m=999;
                        --km;
                    }
                    else
                    {
                        --m;
                    }
                }
                else
                {
                    cm--;
                }
            }
            return temp;
        }
        Distance operator++()
        {

        }
};

class Array{
    private:
        int *p;
        int size;
    public:
        Array(int s)
        {
            size=s;
            p=new int[size];
        }
        int& operator[](int index)
        {
            if(index>=0 && index<size)
                return p[index];
            cout<<"Invalid array index";
            return p[0];
        }
        ~Array()
        {
            delete []p;
        }
    
};
int main()
{

    return 0;
}