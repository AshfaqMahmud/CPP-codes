
// For this question, learn how strlen(), strcat() and sizeof() works

#include<stdio.h>
#include<string.h>

int main()
{
    char* s1 = "Hello BDCOM";
    char s2[5] = "Hello";
    char s3[] = "BDCOM";

    printf("%d\n",strlen(s1));
    printf("%d\n",strlen(s2));
    printf("%d\n",strlen(s3));
    printf("%d\n",sizeof(s1));

    strcat(s3,s2);
    printf("%s\n",s3);


    return 0;
}