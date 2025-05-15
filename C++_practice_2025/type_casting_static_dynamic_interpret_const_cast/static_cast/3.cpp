#include<iostream>
#include<string>

using namespace std;

int main()
{
    char c;   //1byte data
    int *p=(int*)&c; //4 byte data
    *p=5;  //pass at compile time but fails at run time(that; why its dangerous)

   // int* ip=static_cast<int*>(&c);  //fail because compatible pointer type

    return 0;
}