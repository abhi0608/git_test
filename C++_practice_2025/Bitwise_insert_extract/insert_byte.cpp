#include<iostream>
using namespace std;

 int main()
 {
    uint16_t number=0xAAAA;    //s0000 0000
    uint8_t insert_num=0xBB;
    
    number = (number & ~(0xff<<8)) | (insert_num<<8);

    printf("number=0x%x",number);

    return 0;
 }

