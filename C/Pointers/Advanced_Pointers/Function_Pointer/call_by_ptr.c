#include<stdio.h>

int func (int a, int b)
{
    return a+b;
}

int main(){
    int (*ptr) (int, int) = func;
    
    //int a = ptr(5,10);

    int a = (*ptr) (5+2,3);

    printf("Result is %d\n",a);

    return 0;

}