#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int a = 10;
    //arr = &a;                   //expression must be a modifiable lvalue
    *arr = &a;                     //arr[0] is modified by the address of a
    printf("Adreess of a: %d\n",&a);
    for(int i = 0; i<7; i++)
    {
        printf("arr[%d]: %d\n",i,arr[i]);
    }

    return 0;

}