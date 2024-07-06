#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// void main(){
//     char str1[] = "hello";
//     char *str2 = "hello";
//     str1[0] = 's';
//     //str2[0] = 's';

//     printf("%d %s",str1,str2);

//     return;
// }

/*
Explanation:
char str1[] = "hello";:

This creates an array str1 with the contents {'h', 'e', 'l', 'l', 'o', '\0'}.
The array is modifiable, so str1[0] = 's'; is perfectly valid. The content of str1 changes to {'s', 'e', 'l', 'l', 'o', '\0'}.
char *str2 = "hello";:

This creates a pointer str2 that points to a string literal "hello".
String literals in C are stored in a read-only section of memory. Attempting to modify the contents of a string literal results in undefined behavior, which often leads to a runtime error such as a segmentation fault.
Therefore, str2[0] = 's'; is problematic because it tries to modify a read-only memory area.
*/

// void main(){
//     char str2[10];
//     char* str1 = "01927262728222222";
//     strcpy(str2,str1);
//     printf("%s",str2);

//     return;
// }
/*
Explanation:
char str2[10];:

This declares an array str2 with a size of 10 characters.
char* str1 = "01927262728222222";:

This declares a pointer str1 to a string literal "01927262728222222".
The string literal contains 18 characters plus the null terminator, making it 19 characters in total.
strcpy(str2, str1);:

This function copies the contents of str1 to str2.
str1 is 19 characters long (including the null terminator), but str2 can only hold 10 characters.
This results in a buffer overflow because str2 does not have enough space to hold the entire content of str1.
Buffer overflow can lead to undefined behavior, crashes, and security vulnerabilities.
printf("%s", str2);:

If the buffer overflow overwrites critical data or control information, it can lead to a crash or unexpected behavior.
*/

void main(){
    char *p = (char*) malloc(10);
    memcpy(p,"hello", strlen("hello"));
    printf("%s", p);
    return;
}
