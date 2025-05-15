#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    static int x=5,y=10;

    auto lamda_expr=[](int a){
        x=x+a;
        y=y+a;
    };
    lamda_expr(20);
    cout<<x<<" "<<y<<"\n";
    return 0;
}