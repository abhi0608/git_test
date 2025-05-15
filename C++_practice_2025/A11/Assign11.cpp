#include<iostream>
#include<string.h>
using namespace std;

class numbers{

    private:
        int size;
        int *arr;
    public:
        Numbers(int s)
        {
            size=s;
            arr=new int[s];
        }
        ~Numbers()
        {
            delete []arr;
        }

        Numbers(Numbers &n)
        {
            size=n.size;

            arr=new int[size];
            for(int i=0;i<size;i++)
            {
                arr[i]=n.arr[i];
            }
        }
};

class Student{
    private:
        int rollno;
        char name[30];
    public:
        Student()
        {
            cout<<"Enter roll Number:";
            cin>>rollno;
            cout<<"Enter Name: ";
            cin.ignore();
            cin.getline(name,30);
        }
        void display()
        {
            cout<<endl<<rollno<<" "<<name;
        }
};
class Date{
    private:
        int d,m,y;
    public:
        Date():d(1),m(1),y(2000)
        {

        }
        Date(int _d,int _m,int _y):d(_d),m(_m),y(_y)
        {
        }
};
class Room{
    private:
        int room_no;
        int room_type;
        bool is_AC;
        double price;
    public:
        Room(int rno,int rtype,bool ac,double p)
        {
            room_no=rno;
            room_type=rtype;
            is_AC=ac;
            price=p;
        }

};
class Circle{
        private:
            radius;
        public:
            Circle()
            {
                radius=1;
            }
            Circle(int r)
            {
                radius=r;
            }
};
int main()
{

}