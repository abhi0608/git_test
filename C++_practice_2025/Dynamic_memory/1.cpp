#include<iostream>
int e;

void fun()
{
    static int a; //static 
    int b,c; //auto
}

int main()
{
    int d;  
    fun();
    int *ptr=new int[5];
   
    return 0;
}


