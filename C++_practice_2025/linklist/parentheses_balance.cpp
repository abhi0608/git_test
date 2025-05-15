#include<iostream>
#include <stack>
#include<cstring>
using namespace std;


bool matching(char a,char b)
{
	return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
}
bool isBalance(char *str)
{
	
	stack<char> s;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]=='(' || str[i]=='[' || str[i]=='{')
			s.push(str[i]);
		else
		{
			if(s.empty()==true)
				return false;
			else if(matching(s.top(),str[i])==false)
			{
					return false;
			}
			else
				s.pop();
		}
	}
	return s.empty();
}

int main()
{

	cout<< isBalance("{([])}") <<endl;          //balanceed  1
	cout<< isBalance("{([])") <<endl;           //not balanced 0
}
	