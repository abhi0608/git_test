
#include<iostream>
 using namespace std;

 int main()
 {
    uint16_t number=0xAAA0;

    uint8_t arr[2];

    arr[0]=(number >> 0) & 0xff;
    arr[1]=(number >> 8) & 0xff;

    printf("arr[0]=0x%x\n",arr[0]);
    printf("arr[1]=0x%x",arr[1]);

    return 0;
 }
 