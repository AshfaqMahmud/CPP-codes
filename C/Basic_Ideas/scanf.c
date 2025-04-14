#include<stdio.h>

int main()
{
    int a, b, c;
    float d;
    double e;

    scanf("%d %d",&a, &b, &c);
    printf("a: %d b: %d c: %d\n",a,b,c);
    //scanf("%d %d %d",&a, b, &c);
    printf("a: %d b: %d c: %d\n",a=3?11:6,b,c);
    scanf("%d %d",&d,&e);
    printf("d: %d e: %f d: %f\n",a,b,c);

    // char str[8];
    // str[0] = "Ashfaq";
    // puts(str);
    return 0;
}