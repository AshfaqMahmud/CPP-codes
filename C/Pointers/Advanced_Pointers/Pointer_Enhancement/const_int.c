#include<stdio.h>

void func(const int *p) // p is a pointer to a const int
{
    *p += 1; // This will cause a compilation error because p points to a const int
    return;
}

int main(void)
{
    const int a = 2; // Declare a as const int
    func(&a);        // Pass the address of a
    printf("%d\n", a); // Output: 2
    return 0;
}
