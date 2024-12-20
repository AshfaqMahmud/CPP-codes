#include<stdio.h>
#include<stdlib.h>


struct Test
{
    int num;
    char *str;
    short date;
    char cha[2];
    short snum[4];
}*p = NULL;

int main()
{
    printf("%p\n",p+1);
    printf("%p\n",(unsigned long)p+1);
    printf("%p\n",(unsigned long*)p+1);

    return 0;   
}