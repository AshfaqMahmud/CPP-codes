#include<stdio.h>

struct  AAA
{
    int a;
    short b;
    char c;
}aa;

#pragma pack(1)
struct BBB
{
    int a; short b; char c;
}bb;
#pragma pack()

#pragma pack(2)
struct CCC
{
    char c; int a; short b; 
}cc;
#pragma pack()

#pragma pack(4)
struct DDD
{
    char c; int a; short b; 
}dd;
#pragma pack()

int main()
{
    printf("Size of Structure AAA: %d\n",sizeof(aa));       //should print 8

    printf("Size of Structure BBB: %d\n",sizeof(bb));       //should print 7

    printf("Size of Structure CCC: %d\n",sizeof(cc));       //should print 8

    /*-----------------------------------------------------------------------------*/
    printf("Size of Structure DDD: %d\n",sizeof(dd));       //should print 12
    //explanation for DDD
    // Byte:   0   1   2   3   4   5   6   7   8   9   10  11
        //   +---+---+---+---+---+---+---+---+---+---+---+---+
        //   | c |pad|pad|pad| a   a   a   a | b   b |pad|pad|
        //   +---+---+---+---+---+---+---+---+---+---+---+---+
    /*-----------------------------------------------------------------------------*/

    return 0;
}

