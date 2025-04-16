#include<stdio.h>

void test_fun(int b)
{
    *(int *)b = 3;
    return;
}

int main()
{
    int a = 2;
    test_fun(&a);
    printf("%d\n", a);


    return 0;
}