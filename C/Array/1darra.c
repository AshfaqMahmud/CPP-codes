#include<stdio.h>

int main()
{
    int arr[] = {'A','B',67,'D','E'};
    int *p = arr;
    printf("%x %x %x\n",p,*p,&p);
    printf("%x %x %x\n",arr,*arr,&arr);
    printf("%d %x %d %x\n",sizeof(arr),sizeof(p));
    printf("%x %d\n",sizeof(arr),sizeof(p),sizeof(*arr),sizeof(*p+1));

    return 0;
}