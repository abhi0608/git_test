#include<iostream>
 using namespace std;

 class Add
 {
        int x,y,z;
   public:
        void getdata();
        {
            cout<<"Enter two number";
            cin>>x>>y;
        }
        void calculate(void);
        void display(void);
 };
 
 void Add::calculate()
 {
    z=x+y;
 }
 void Add::display()
 {
    cout<<z;
 }


 int main()
 {

    Add a;
    a.getdata();
    a.calculate();
    a.display();

    return 0;

 }