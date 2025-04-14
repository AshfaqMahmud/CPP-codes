// Online C compiler to run C program online
#include <stdio.h>

void test_fun(int b)
{
    *(int *)b = 3;

    return;
}

int main(void)
{
    // int a = 2;

    // test_fun(&a);
    // printf("%d\n", a);    // 3
    int ints[20] = {
        10, 20, 30, 40, 50, 60, 70, 80, 90, 100,
        110, 120, 130, 140, 150, 160, 170, 180, 190, 200};
    int *p = ints + 3;
    printf("%x %x\n", ints, p);
    printf("%d %d\n", ints[4], p[-2]);
    return 0;
}