#include <stdio.h>

int main()
{
    char* str = "Hello World!";
    char str1[] = "Hello World!";
    str[2] = 11;            //Segmentation Fault
    str1[2] = 22;

    puts(str);          // not part of the given assembly code
    return 0;
}
















// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int *ptr = arr + 2;
//     arr[1] = 11;                    // Direct Reference
//     *(ptr + 1) = 22;                // Indirect Reference
//     arr[2] = 33;                    // Direct Reference
//     *(ptr + 2) = 44;                // Indirect Reference

//     return 0;
// }