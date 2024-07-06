#include <stdio.h>


int main() {
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of signed char: %zu bytes\n", sizeof(signed char));
    printf("Size of unsigned char: %zu bytes\n", sizeof(unsigned char));

    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of signed short: %zu bytes\n", sizeof(signed short));
    printf("Size of unsigned short: %zu bytes\n", sizeof(unsigned short));

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of signed int: %zu bytes\n", sizeof(signed int));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));

    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of signed long: %zu bytes\n", sizeof(signed long));
    printf("Size of unsigned long: %zu bytes\n", sizeof(unsigned long));

    printf("Size of long long: %zu bytes\n", sizeof(long long));
    printf("Size of signed long long: %zu bytes\n", sizeof(signed long long));
    printf("Size of unsigned long long: %zu bytes\n", sizeof(unsigned long long));

    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    printf("Size of char*: %zu bytes\n", sizeof(char*));
    printf("Size of int*: %zu bytes\n", sizeof(int*));
    printf("Size of void*: %zu bytes\n", sizeof(void*));

    return 0;
}


// int main() {
//     printf("Size of short: %zu bytes\n", sizeof(short));
//     printf("Size of int: %zu bytes\n", sizeof(int));
//     printf("Size of long: %zu bytes\n", sizeof(long));
//     printf("Size of unsigned short: %zu bytes\n", sizeof(unsigned short));
//     printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
//     printf("Size of unsigned long: %zu bytes\n", sizeof(unsigned long));

//     return 0;
// }

/*Expected Output on a 64-bit System
arduino
Copy code
Size of short: 2 bytes
Size of int: 4 bytes
Size of long: 8 bytes
Size of unsigned short: 2 bytes
Size of unsigned int: 4 bytes
Size of unsigned long: 8 bytes
This comparison helps you understand when to use each type based on the range of values you need to represent and the memory constraints of your application.*/