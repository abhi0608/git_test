#include<iostream>
 using namespace std;

 class Time
 {
    int hours,minutes;
    public:
        void gettime(int h,int m)
        {
            hours=h;
            minutes=m;
        }
        void sum(Time,Time);
        void display(void);
 };

 void Time::sum(Time t1,Time t2)
 {
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;
 }

 void Time::display()
 {
    cout<<hours<<":"<<minutes<<endl;
 }

 int main()
 {

    Time t1,t2,t3;
    t1.gettime(2,45);
    t2.gettime(3,30);
    t3.sum(t1,t2);
    t1.display();
    t2.display();
    cout<<"Addition of above two time is";
    t3.display();

    return 0;
 }