#include <stdio.h>
int fun(int a, int b)
{
    return a + b;
}
int mul(int a, int b)
{
    return a * b;
}
int dx = fun(2, 3);
int ex = mul(2, 3);
int main()
{
    printf("%d", dx, &ex);
}