/*
----------------------------------------------------------------------------------
------------------This C code visualize the 4 dimensional array-------------------
------------------and also the way of dereferencing them to show------------------
------------------the contents of each blok properly. this code-------------------
------------------is only for static array. for dynamic arrays -------------------
------------------see other codes please------------------------------------------
----------------------------------------------------------------------------------

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int arr[4][3][2][2] = {
        {{{1, 2},
          {3, 4}},
         {{5, 6},
          {7, 8}},
         {{9, 10},
          {11, 12}}},
        {{{13, 14},
          {15, 16}},
         {{17, 18},
          {19, 20}},
         {{21, 22},
          {23, 24}}},
        {{{25, 26},
          {27, 28}},
         {{29, 30},
          {31, 32}},
         {{33, 34},
          {35, 36}}},
        {{{37, 38},
          {39, 40}},
         {{41, 42},
          {43, 44}},
         {{45, 46},
          {47, 48}}}};
    printf("\n\nAddress of starting array: %d\t\tAddress after the whole array: %d\n\n\n",&arr, &arr + 1);
    for (i = 0; i < 4; ++i)
    {
        printf("Address of arr + %d\t:\t%d\t\tValue here is %d\n", i, arr + i,****(arr+i));        // the address gap should be (3x2x2)x4 = 48 Bytes and value gap (3x2x2) = 12
    }
    printf("\n\n");

    for (i = 0; i < 12; ++i)
    {
        printf("Address of arr + %d\t:\t%d\t\tValue here is %d\n", i, *arr + i,***(*arr+i));        // the address gap should be (2x2)x4 = 16 Bytes and value gap (2x2) = 4
    }
    printf("\n\n");

    for (i = 0; i < 24; ++i)
    {
        printf("Address of arr + %d\t:\t%d\t\tValue here is %d\n", i, **arr + i,**(**arr+i));        // the address gap should be (2)x4 = 8 Bytes and value gap (2) = 2
    }
    printf("\n\n");

    for (i = 0; i < 48; ++i)
    {
        printf("Address of arr + %d\t:\t%d\t\tValue here is %d\n", i, ***arr + i,*(***arr+i));        // the address gap should be (1)x4 = 4 Bytes and value gap (1) = 1
    }


    return 0;
}