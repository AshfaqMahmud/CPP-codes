#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    unsigned char a=0,b=0,d=0,e=0;
    unsigned int c=0;
    printf("%d %d %d %d %d\n",a,b,c,d,e);
    a=7*3;
    b= 3<<2;
    c= ~1;
    d=~(a>>1);
    e=a & b;
    //x= 16<<3;
    printf("%d %d %d %d %d\n",a,b,c,d,e);
    printf("%c %c %c %c %c\n",a,b,c,d,e);
    //printf("X is %d", x);

    return;
}