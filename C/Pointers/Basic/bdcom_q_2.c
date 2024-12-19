#include<stdio.h>

void func(int a[], int *b, int c[5])
{
    //printf("%X %X %X",a,*b,c[5]);
    return;
}

int main()
{
    int array1[5] = {0};
    int array2[5] = {0};
    int array3[5] = {0};
    printf("%X %X %X\n",array1,array2,array3);
    func(array1, array2, array3);
    // int a [] = {1,2,3,4,5,6,7,8,9};
    // int *p = a;
    // int *q = &a + 1;
    // int m = 22;
    // int n = 33;

    // p += 3;

    // printf("%X %X %X %X %X\n",p, &a[3], &a[8], q);
    // printf("%d %d\n", *p, q-p);
    // printf("%X %X\n", &m , &n);
    // printf("%d\n", &m - &n);

    return 0;
}