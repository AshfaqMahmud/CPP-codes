#include<stdio.h>

int main()
{
    char aa[3][5] ={"12345","23456","34567"};
    printf("%p\n",aa);
    printf("%p\t\t\t %p\t\t%s",((int*)&aa)+1,*(((int*)&aa)+1),(((int*)&aa)+1));
}