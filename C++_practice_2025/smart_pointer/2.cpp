#include<iostream>

using namespace std;
/*solution of 1.cpp*/
class SP
{
    int *ptr;
    public:
        SP(int *p=NULL){ptr=p;}
        ~SP(){delete ptr;}

        int& operator*()
        {
            return *ptr;
        }
};

int main()
{
    SP sp(new int());
    *sp=20;
    cout<<*sp;

    return 0;
}