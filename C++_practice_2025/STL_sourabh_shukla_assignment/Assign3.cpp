#include<iostream>
#include<bits/stdc++.h>
#include<array>

using namespace std;

void p1()
{
    array <int,5> a1={10,20,30,40,50};
    array<int,5>::reverse_iterator rit;
    for(rit=a1.rbegin();rit!=a1.rend();rit++)
    {
        cout<<*rit<<" ";
    }
    cout<<endl;
}
void p2()
{
    array <float,5> a1={10.5f,20.3f,30.4f,40.6f,50.6f};
    array<float,5>::iterator rit;
    float avg,sum=0;
    for(auto rit=a1.begin();rit!=a1.end();rit++)
    {
        sum=sum+(*rit);
        //cout<<*rit<<" ";
    }
    avg=sum/a1.size();

    cout<<"Average is ="<<avg<<endl;
}

void p3()
{
    int temp;
    array <int,10> a1;
    cout<<"Enter 10 elements: ";
    for(int i=0;i<=9;i++)
    {
        cin>>temp;
        a1[i]=temp;
    }
    cout<<"The maximum element is: "<<*max_element(a1.begin(),a1.end());
    cout<<endl;
}
class Complex{
    private:
        int a,b;
    public:
        Complex()
        {

        }
        Complex(int x,int y):a(x),b(y)
        {}
        void showData(){
            cout<<"\n a="<<a<<"b ="<<b;
        }
        Complex operator+ (Complex C)
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
};

void p4()
{
    Complex sumComplex(array<Complex,5>);
    array <Complex,5> a1={Complex(2,3),
                            Complex(2,5),
                            Complex(2,7),
                            Complex(2,8),
                            Complex(2,-3)
                        };
    Complex C=sumComplex(a1);
    C.showData();
    cout<<endl;
}
Complex sumComplex(array<Complex,5> a1)
{
    Complex C(0,0);
    for(auto x:a1)
    {
        C=C+x;
    }
    return C;
}

int cmp(int a,int b)
{
    return abs(a)<abs(b);
}
void p5()
{
    array <int,10> a1={10,30,20,122,44,55,66,900,42,11};
   // sort(a1.begin(),a1.end(),[](int a,int b){return a>b;});
   sort(a1.begin(),a1.end(),cmp);
    for(auto x:a1)
        cout<<x<<" ";
    cout<<endl;
}
int main()
{
    p1();
    p2();
  //  p3();
   // p4();
    p5();
    return 0;
}