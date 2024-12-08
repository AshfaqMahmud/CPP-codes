// #include<stdio.h>

// int main()
// {
//     // int a = 2, *p = &a, **q = &p;

//     // printf("The value of a is 0x%-8x, its address is %p\n",a,&a);
//     // printf("The value of p is 0x%-8x, its address is %p\n",p,&p);
//     // printf("The value of q is 0x%-8x, its address is %p\n",q,&q);

//     // float a = 8.5, *f_p;
//     // int b = 23, *i_p;
//     // i_p = &b;
//     // f_p = &a;

//     // printf("Float is %f at address %p and address of ptr is %p\n", *i_p, i_p, &i_p);
//     // printf("Inte is %d at address %p and address of ptr is %p\n", *f_p, f_p, &f_p);

    

//     return 0;
// }

#include<stdio.h>

int main()
{
    float a = 8.5, *f_p;
    int b = 23, *i_p;
    i_p = &b;
    f_p = &a;

    // Correct format specifiers for printing float and int values
    printf("Integer is %d at address %p and address of ptr is %p\n", *i_p, i_p, &i_p);
    printf("Float is %f at address %p and address of ptr is %p\n", *f_p, f_p, &f_p);

    return 0;
}
