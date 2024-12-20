#include <stdio.h>

int main(void)
{
    unsigned char a = -1;
    unsigned short b = -1;
    unsigned int c = -1;
    char d = -1;
    short e = -1;
    int f = -1;
    printf("%d %hd %hhd\n", a, a, a);
    printf("%d %hd %hhd\n", b, b, b);
    printf("%d %hd %hhd\n", c, c, c);
    printf("%u %hu %hhu\n", a, a, a);
    printf("%u %hu %hhu\n", b, b, b);
    printf("%u %hu %hhu\n", c, c, c);

    printf("%d %hd %hhd\n", d, d, d);
    printf("%d %hd %hhd\n", e, e, e);
    printf("%d %hd %hhd\n", f, f, f);
    printf("%u %hu %hhu\n", d, d, d);
    printf("%u %hu %hhu\n", e, e, e);
    printf("%u %hu %hhu\n", f, f, f);
    return 0;
}