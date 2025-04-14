#include <stdio.h>

int main()
{
    int a = 2, b = 1, c = 2;

    if (a = b + 1)
        c++;
    else
        a++;
    printf("%d %d %d\n", a, b, c);
    b = (a < b ? a = b - a : ((c = 2, b = 3) | (a == 2, c = 3))) ? a++ : b++;

    switch (c += 1)
    {
        printf("%d", c);
    case 1:
        a = c;
        break;
    case 2:
        a++;
        break;
        b = c - a + 2;
    case 3:
        break;
    case 0:
        b++;
        break;
    default:
        c--;
        break;
    }
    printf("%d %d %d\n", a, b, c);

    return 0;
}