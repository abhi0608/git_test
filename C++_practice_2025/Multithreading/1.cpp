#include<iostream>
#include<thread>
#include<chrono>
#include<algorithm>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

ull OddSum=0;
ull EvenSum=0;

void findEven(ull start,ull end)
{
    for(ull i=start; i<=end; ++i)
    {
        if((i & 1)==0)
        {
            EvenSum+=i;
        }
    }
} 
void findOdd(ull start,ull end)
{
    for(ull i=start; i<=end; ++i)
    {
        if((i & 1)==1)
        {
            OddSum+=i;
        }
    }
} 

int main()
{
    ull start=0,end=190000000;

    findOdd(start,end);
    findEven(start,end);

    cout<<"OddSum: "<< OddSum << endl;
    cout<<"EvenSum :"<< EvenSum << endl;

    return 0;
}