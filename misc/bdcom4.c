#include<stdio.h>

void main(){
    unsigned char a,b,c;
    char aa,bb,cc;
    char str[8] = "abcdefgh";  // Array size matches the length of the string literal + 1 for null terminator

    a=150;b=50;c=a-b;
    printf("%u %u %u\n",a,b,c);
    aa=150;bb=50;cc=aa-bb;
    printf("%d %d %d\n",aa,bb,cc);

    printf("%s", str);
    return;
}

/*
if value> max_value (128,256,512...) :
    value = neg_max_value + (value % max_value)

    here 150 > 128 so:
        aa = -128 + 150 % 128
            = -128 + 22 = -126
*/