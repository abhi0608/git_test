#include<iostream>
using namespace std;
class Complex{
    private:
        int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<"\n a="<<a<<" b="<<b;
        }
        Complex add(Complex C)
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
        Complex subtract(Complex C)
        {
            Complex temp;
            temp.a=a-C.a;
            temp.b=b-C.b;
            return temp;
        }
        Complex multiply(Complex C)   
        {
            Complex temp;
            temp.a=a*C.a-b*C.b;
            temp.b=b*C.b+b*C.a;
            return temp;
        }
};

class Time
{
    private:
        int h,m,s;
    public:
        void setTime(int a,int b,int c)
        {
            h=a;
            m=b;
            s=c;
        }
        void showTime(){
            cout<<"\n"<<h<<":"<<m<<":"<<s;
        }
        void normalize()
        {
            m=m+s/60;
            s=s%60;
            h=h+m/60;
            m%=60;
        }
        Time add(Time T)
        {
            Time temp;
            temp.s=s+T.s;
            temp.m=m+T.m;
            temp.h=h+T.h;
            temp.normalize();
            return temp;
        }
        bool is_greater(Time T)
        {
            if(h>T.h)
                return true;
            else if(h<T.h)
                return false;
            else if(m>T.m)
                return true;
            else if(m<T.m)
                return false;
            else if(s>T.s)
                return true;
            else
                return false;
        }
};

class TestResult
{
    private:
        int roll_no,right,wrong,net_score;
        static int right_weightage,wrong_weightage;
    public:
        void setRoll_no(int r)
        {
            roll_no=r;
        }
        void setRight(int r)
        {
            right=r;
        }
        void setwrong(int w)
        {
            wrong=w;
        }
        void setNetScore(int n)
        {
            net_score=n;
        }
        static void setRight_weightage(int rw)
        {
            right_weightage=rw;
        }
        static void setWrong_weightage(int rw)
        {
            wrong_weightage=rw;
        }
        int getRoll_no()
        {
            return roll_no;
        }
        int getRight()
        {
            return right;
        }
        int getWrong()
        {
            return wrong;
        }
        int getNetScore()
        {
            return net_score;
        }
        static int getRight_weightage()
        {
            return right_weightage;
        }
        static int getWrong_weightage()
        {
            return wrong_weightage;
        }
};
int TestResult::right_weightage;
int TestResult::wrong_weightage;

void setTestResult(TestResult &t,int r,int right,int wrong)
{
    t.setRoll_no(r);
    t.setRight(right);
    t.setwrong(wrong);
    t.setNetScore(t.getRight()*TestResult::getRight_weightage()-t.getWrong()*TestResult::getWrong_weightage());
}
void sortByNetScore(TestResult tr[],int size)
{
    int r,i;
    TestResult temp;
    for(r=1;r<size;r++)
    {
        for(i=0;i<size-1-r;i++)
        {
            if(tr[i].getNetScore()<tr[i+1].getNetScore())
            {
                temp=tr[i];
                tr[i]=tr[i+1];
                tr[i+1]=temp;
            }
        }
    }
}
void showTestResults(TestResult tr[],int size)
{
    cout<<endl;
    cout<<"-----------------------";
    cout<<endl;
    cout<<"Roll No Right Wrong Net score";

        for(int i=0;i<size;i++)
        {
            cout<<endl;
            cout<<tr[i].getRoll_no()<<" ";
            cout<<tr[i].getRight()<<" ";
            cout<<tr[i].getWrong()<<" ";
            cout<<tr[i].getNetScore()<<" ";
        }
}
int main()
{
    int r,right,wrong;   
    TestResult tr[5];
    TestResult::setRight_weightage(3);
    TestResult::setRight_weightage(-1);

    for(int i=0;i<5;i++)
    {
         cout<<"Enter details for test result"<<i+1;
         cout<<endl;
         cout<<"Enter rollno:";
         cin>>r;
         cout<<"Enter number of right answers:";
         cin>>right;
         cout<<"Enter number of wrong answers:";
         cin>>wrong;
         setTestResult(tr[i],r,right,wrong);
    }
    sortByNetScore(tr,5);
    showTestResults(tr,5);
    return 0;
}