#include<iostream>

using namespace std;

#define myMax(x,y) ((x>y)?x:y)                     //difficult to debug

int main()
{
    cout<<myMax(2,3);
    cout<<endl;
    cout<<myMax('c','g');        
    return 0;
}