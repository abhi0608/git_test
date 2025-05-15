#include<iostream>
#include<exception>
using namespace std;
/*
    All standard library exception like bad.aloc 
    bad cast etc inherit from exception class or indirectly.
*/
class MyException:public exception
{
    virtual const char *what() const throw()
    {
        return "Exception onward\n";
    }
};

int main()
{
    try{
        throw MyException();
    }
    catch(exception &e)
    {
        cout<<e.what();
    }
    
    return 0;
}