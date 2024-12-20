#include<stdio.h>

int main()
{
    int a = 0x11223344;
    int b = 0x12345678;
    int *p = &b;
    char *q = &b;

    printf("%d %d\n", sizeof(p), sizeof(q));

    printf("p: %p\t\t*p: %X\n", p, *p);
    printf("\t\t\t\t*p: %X\n", *(unsigned char*)p);
    p = (unsigned char*)p + 1;
    printf("\t\t\t\t*p: %X\n",*(unsigned char*)p);
    
    p = &b;
    p++;

    printf("p: %p\t\t*p: %X\n", p, *p);

    printf("q: %p\t\t*q: %X\n", q, *q); q++;
    printf("q: %p\t\t*q: %X\n", q, *q); q++; 
    printf("q: %p\t\t*q: %X\n", q, *q); q++; 
    printf("q: %p\t\t*q: %X\n", q, *q); q++; 
    printf("q: %p\t\t*q: %X\n", q, *q); 


    return 0;
}