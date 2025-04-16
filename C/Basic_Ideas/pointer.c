#include<stdio.h>

int main()
{
    long a = 0xAABBCCDD;
    int b = 0x11223344;
    char *p = &a;
    printf("%X %X\n",*(p+3), *p+3);
    p= &b;
    printf("%X %X\n",*(p+3), *p+3);

    printf("%d %d %d\n",sizeof((char*)p),sizeof((int*)p),sizeof((long*)p));

    return 0;
}