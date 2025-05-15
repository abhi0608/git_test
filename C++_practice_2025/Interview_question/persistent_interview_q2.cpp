#include<stdio.h>
#include<stdlib.h>
#include <stdint.h>
int main()
{
    uint32_t n1=9;
    uint32_t n2=14;
    int count=0;
    for(int i=0;i<32;i++)
    {
        if( (n1&(1<<i)?1:0) != (n2&(1<<i)?1:0) )
        {
            count++;
        }
        
    }
    printf("count=%d",count);
    return 0;
}
