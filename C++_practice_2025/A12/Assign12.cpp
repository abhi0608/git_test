/*
    Matrix questions with operator overloading
*/
#include<iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        void setData(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        void showData()
        {
            cout<<"a= "<<a<<"b= "<<b<<endl;
        }
        Complex operator+(Complex C)
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
        Complex operator*(Complex C)
        {
            Complex temp;
            temp.a=a*C.a-b*C.b;
            temp.b=a*C.b+b*C.a;
            return temp;
        }
        bool operator==(Complex C)
        {
            if(a==C.a && b==C.b)
            {
                return true;
            }
            else
                return false;
        }
        
};

class Time{
        private:
            int hr,min,sec;
        public:
            void setTime(int x,int y,int z)
            {
                hr=x;
                min=y;
                sec=z;
            }
            void showTime()
            {
                cout<<hr<<":"<<min<<":"<<sec;
            }
            bool operator>(Time T)
            {
                if(hr>T.hr)
                {
                    return true;
                }
                else if(hr<T.hr)
                {
                    return false;
                }
                else if(min>T.min)
                {
                    return true;
                }
                else if(min<T.min)
                {
                    return false;
                }
                else if(sec>T.sec)
                {
                    return true;
                }
                else    
                    return false;
            }
            Time operator++(int) //post increment
            {
                Time temp=*this;
                sec++;
                min+=sec/60;
                sec=sec%60;

                hr+=min/60;
                min=min%60;
                
                return temp;
            }
            Time operator++() //preincrement
            {
                sec++;
                min+=sec/60;
                sec=sec%60;

                hr+=min/60;
                min=min%60;
                return *this;
            }

            Time operator+(Time T)
            {
                Time temp;
                temo.hr=hr+T.hr;
                temp.min=min+T.min;
                temp.sec=sec+T.sec;

                temp.min+=temp.sec/60;
                temp.sec=temp.sec%60;
                temp.hr+=temp.min/60;
                temp.min=temp.min%60;
                
                return temp;
            }
};


int main()
{
    return 0;
}