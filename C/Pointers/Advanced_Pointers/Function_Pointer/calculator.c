#include<stdio.h>
#include<math.h>
float add (float a, float b)
{
    return a+b;
}
float sub (float a, float b)
{
    return a-b;
}
float div (float a, float b)
{
    return b != 0 ? a / b : 0;
}
float mul (float a, float b)
{
    return a*b;
}
float mod (float a, float b)
{
    return (int)a % (int)b;
}
int calculate (int a, int b, char op)
{
    float (*ptr[]) (float, float) = {mod,[5]=mul,[6]=add,[8]=sub,[10]div};

    return ptr[op-37](a,b);
}
int main()
{
    int a = 7, b = 3;
    printf("%d - %d = %d\n",a,b,calculate(a,b,'-'));
    printf("%d * %d = %d\n",a,b,calculate(a,b,'*'));
    printf("%d + %d = %d\n",a,b,calculate(a,b,'+'));
    printf("%d mod %d = %d\n",a,b,calculate(a,b,'%'));
    printf("%d / %d = %d\n",a,b,calculate(a,b,'/'));

    return 0;
}

