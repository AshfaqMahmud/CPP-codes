/*--------------Swapping two values using pointer---------------*/

#include <stdio.h>

void swap(int *x, int *y)
{
    (*x) = (*x) ^ (*y);
    (*y) = (*x) ^ (*y);
    (*x) = (*x) ^ (*y);

    return;
}

int main()
{
    int x = 10, y = 20;
    printf("Before swapping...\nx is %d, y is %d\n", x, y);
    swap(&x, &y);
    printf("After swapping...\nx is %d, y is %d\n", x, y);

    return 0;
}