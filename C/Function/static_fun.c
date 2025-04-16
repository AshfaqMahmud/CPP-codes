#include<stdio.h>

int fun (void)
{
    static a = 1;
    printf("Fun is called %d times\n",a);
    return a++;
}
float mul (void)
{
    static float a= 5;
    printf("Mul fun is called %f\n");
    return a*a;
}

int main()
{
    int (*fptr) (void) = fun;
    float (*fptr2) (void) = mul;
    printf("%d %d\n",fptr(),fptr2());

    return 0;
}