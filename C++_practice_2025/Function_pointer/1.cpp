/*
    Function pointer:-
    1.Stores address of a function (set of instruction)
    2.Like normal pointers,we can pass a function pointer to other functions.
    3.Used in qsort(),sort(),for_each() or any other place 
    where we with to provide functionality as a parameter.

    4.used to implement virtual functions.
    A function pointer holds an address of text section.

*/
#include<iostream>

using namespace std;

void fun()
{
    cout<<"GFG";
}
int main()
{
    void (*fun_ptr)()=fun;
    fun_ptr();
    return 0;
}