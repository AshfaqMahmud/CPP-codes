#include<stdio.h>

int main()
{
    
    char* q[3]={"Ashfaq","Mahmud","Stark"};
    char** p = q;
    char a[2][5] = {"12345","abcd"};
    printf("%d %s %s %c\n",sizeof(q),*p+2,*(p+2),**p+2,**(p+2));

    char (*p2)[5] = a;

    p = (char **)((char*)(p2+1)+3);
    printf("%s %s %s\n",*p2,p2+2,*p2+1,*p);

    return 0;
}

