#include<stdio.h>

void test (int *b)
{
         *b = 10;
         return ;
}

int main()
{
        int a = 11;
        test(&a);
        printf("%d\n",a); //10
        return 0;
}
