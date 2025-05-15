#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
    char* str;
    int len;
    
public:
    MyString() { len = 0; str = new char[len + 1]; memcpy(str, "", len + 1); }
    MyString(const char* s) { len = strlen(s); str = new char[len + 1]; memcpy(str, s, len + 1); }
    MyString(const MyString& s) { str = new char[s.len + 1]; memcpy(str, s.str, s.len + 1); len = s.len; }
    
    MyString& operator = (const MyString& s) { 
        if (this == &s) return *this;
        if (s.len > 0) { delete[]str;  str = new char[s.len + 1];
        memcpy(str, s.str, s.len + 1); len = s.len;
        }
        return *this;
    }
    friend ostream& operator << (ostream& os, const MyString& s) { os << s.str; return os; }
    friend istream& operator >> (istream& is, MyString& s) { 
        s.str = new char[1000];
        memset(s.str, 0, sizeof(s.str));
        is >> s.str;
        s.len = strlen(s.str);
        return is;
     }
    ~MyString() { delete []str; }
};
 
int main()
{
    MyString str1("Amit"); cout << str1 <<"\n";
    //cin >> str;
    MyString str2("Sharad Kumat"); cout << str2 <<"\n";
    str2 = str1;
 
    MyString str3(str2);
 
    cout << str3;  //for str3 we have to call friend 
    return 0;
}
