/*It can perform dangerous conversion because it can typecast any pointer to any other pointer.*/
#include<iostream>

using namespace std;

class Mango{
    public:
        void eatMango(){cout<<"eating Mango"<<endl;}
};

class Banana{
    public:
        void eatBanana(){cout<<"eating Banana"<<endl;}
};
int main()
{
    Banana *b=new Banana();
    Mango *m=new Mango();
    Banana *newbanana=reinterpret_cast<Banana*>(m);
    newbanana->eatBanana();

    Mango *ma=reinterpret_cast<Mango*>(newbanana);
    ma->eatMango();

    return 0;
}