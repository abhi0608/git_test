#include <stdio.h>
#include <string.h>
int substring(char *str,char *substr)
{
    int sl=strlen(str);
    int subsl=strlen(substr);
    
    for(int i=0;i<sl-subsl;i++)
    {
        int j;
        for(j=0;j<subsl;j++)
        {
            if(str[i+j]!=substr[j])
                break;
        }
    if(j==subsl)
        return i;
    }
    return -1;
}
int main()
{
    char str[100]="I am Abhinav";
    char substr[10]="am";
    printf("%d",substring(str,substr));

    return 0;
}