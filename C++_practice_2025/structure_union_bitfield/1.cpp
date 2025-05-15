#include<iostream>

using namespace std;

typedef struct
{
    uint32_t nb0:4;
    uint32_t nb1:4;
    uint32_t nb2:4;
    uint32_t nb3:4;
    uint32_t nb4:4;
    uint32_t nb5:4;
    uint32_t nb6:4;
    uint32_t nb7:4;
}nb_t;
typedef struct{
    uint32_t b0:1;
    uint32_t b1:1;
    uint32_t b2:1;
    uint32_t b3:1;
    uint32_t b4:1;
    uint32_t b5:1;
    uint32_t b6:1;
    uint32_t b7:1;
    uint32_t b8:1;
    uint32_t b9:1;
    uint32_t b10:1;
    uint32_t b11:1;
    uint32_t b12:1;
    uint32_t b13:1;
    uint32_t b14:1;
    uint32_t b15:1;
    uint32_t b16:1;
    uint32_t b17:1;
    uint32_t b18:1;
    uint32_t b19:1;
    uint32_t b20:1;
    uint32_t b21:1;
    uint32_t b22:1;
    uint32_t b23:1;
    uint32_t b24:1;
    uint32_t b25:1;
    uint32_t b26:1;
    uint32_t b27:1;
    uint32_t b28:1;
    uint32_t b29:1;
    uint32_t b30:1;
    uint32_t b31:1;
}bit_type;

typedef union
{
    bit_type bit;
    nb_t nb;
    uint8_t byte[4];
    uint16_t word[2];
    uint32_t lword;
}multi_t;
int main()
{
    multi_t myData;
    myData.lword=0xA1B2C3D4;

    printf("myData.lword=0x%x\n",myData.lword);
    myData.bit.b4=0x1;
    printf("myData.b4=0x%x\n",myData.bit.b4);
    myData.nb.nb3=0xb;
     printf("myData.nb3=0x%x\n",myData.nb.nb3);
    myData.byte[2]=0xAA;
    printf("myData.byte[2]=0x%x\n",myData.byte[2]);
    myData.word[0]=0xBBBB;
    printf("myData.word[0]=0x%x\n",myData.word[0]);
    printf("myData.lword=0x%x\n",myData.lword);




    return 0;
}