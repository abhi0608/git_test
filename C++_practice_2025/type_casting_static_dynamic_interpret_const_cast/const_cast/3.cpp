
#include<iostream>

using namespace std;
void thirdpartyLibrary(int* x)
{
        int k=10;
        cout<<k+*(x);
}
int main()
{
    const int x=20;
    const int *px=&x;
    thirdpartyLibrary(const_cast<int*>(px)); //it will run successfully.
}