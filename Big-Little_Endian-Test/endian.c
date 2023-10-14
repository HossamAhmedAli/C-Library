#include<stdio.h>
#define BIG_ENDIAN 1
#define LITTLE_ENDIAN 0
char endian();
int main(void)
{
    if(endian()==BIG_ENDIAN) printf("BIG_ENIDAN");
    else printf("LITTLE_ENDIAN");
    return 0;
}
char endian()
{
    short int test_value=0x0001; // 2 bytes which one of them contains 1 and the other contains 0
    char *test_ptr=(char*)&test_value; // casting to one byte to read
    printf("first element=0x%0X\n",test_ptr[0]);
    if(*test_ptr == 1) return BIG_ENDIAN;
    else return LITTLE_ENDIAN;
}
