
#include<iostream>

using namespace std;
struct myStruct{
    int x;
    int y;
    char c;
    bool b;
};

int main()
{
    myStruct s;
    s.x=5;
    s.y=10;
    s.c='a';
    s.b=true;

    int *p=reinterpret_cast<int*> (&s);
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p++;
    char *c=reinterpret_cast<char*>(p);
    cout<<*c<<endl;
    cout<<*(reinterpret_cast<bool*>(++c))<<endl;
    return 0;
}