#include<iostream>
using namespace std;
class A
{
    int a;
public:
    A()
    {
        cout<<"construtor A\n";
    }
	void f1(){}
	virtual ~A()
	{
		cout<<"A destructor\n";
	}
};
class B: public A
{
    int b;
public:
    B()
    {
        cout<<"construtor B\n";
    }
    void f2()
    {
    }
    ~B(){
        cout<<"B destrutor\n";
    }
};

void fun()
{
    A *p=new B;
    p->f1(); 
	//p->f2();//error
	delete p;
}

int main()
{
    fun();
    return 0;
}