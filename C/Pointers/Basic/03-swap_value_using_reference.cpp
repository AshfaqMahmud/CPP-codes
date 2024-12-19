/*---------------Swap value through call by reference---------------*/

#include<stdio.h>

void swap (int &x, int &y)          //you can only use int &x as parameter when the file type is .cpp, not .c
{
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    return;
}

int main()
{
    int x = 10, y = 20;
    printf("Before swapping...\nx is %d, y is %d\n", x, y);
    swap(x, y);
    printf("After swapping...\nx is %d, y is %d\n", x, y);

    return 0;

}
