#include<iostream>
using namespace std;

enum class Color1{red,green,blue}; 
enum class People{good,bad};

int main()
{
    if(Color1::red == People::good) //it will be an error in enum class
    {
        cout<<"red and people are equal"<<endl;  //it will be an error in enum class
    }
    else
    {
        cout<<"Not equal"<<endl;
    }
    return 0;
}