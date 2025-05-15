// 1. Define a function to count vowels in a given string.
int count_vowels(string str)
{
    int count_V = 0;
    for(int x = 0; str[x]; x++)
        if('a'==str[x]||'e'==str[x]||'i'==str[x]||'o'==str[x]||'u'==str[x])
            count_V++;
        else if('A'==str[x]||'E'==str[x]||'I'==str[x]||'O'==str[x]||'U'==str[x])
            count_V++;
    return count_V;
}

// 2. Define a function to check if a given string is a palindrome or not.

bool is_Palindrome(string str)
{
    int z,len = str.size();
    for(int x = 0,z = len-1; x<len/2; x++,z--)
        if(str[x] != str[z])
            return false;
    return true;
}

// 3. Define a function to search a given pattern in a given string.
bool Find_Pattern(string patt, string str)
{
    int lenP = patt.size();
    int lenS = str.size();
    int a,z;
    for(int x = 0; x<=lenS-lenP; x++)
    {
        z = x;
        for(a = 0; a<lenP; a++,z++)
            if(patt[a] != str[z])
                break;
        if(a == lenP)
            return true;
    }
    return false;
}

// 4. Define a function to capitalise a given string. Make first letter of each word capital.
void Capitalise(string &str)
{
    for(int x = 0; str[x]; x++)
        if(x==0 || str[x]==' ' && 'a'<=str[x] && 'z'>=str[x])
            str[x] = str[x]-32;
        else if(str[x]==' ' && 'a'<=str[x+1] && 'z'>=str[x+1])
            str[x+1] = str[x+1]-32;
}

// 5. Define a function to reverse a string.
void Reverse_String(string &str)
{
    char ch;
    int z,len = str.size();
    for(int x = 0,z = len-1; x<len/2; x++,z--)
    {
        ch = str[x];
        str[x] = str[z];
        str[z] = ch;
    }
}

int main()
{

    return 0;
}