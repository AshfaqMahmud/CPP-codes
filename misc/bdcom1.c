#include<stdio.h>

void main()
{
    char *s = "hello";
    char ch = 'a';
    printf("%d %d %d\n", sizeof(char), sizeof('a'), sizeof(ch));
    printf("%d %d %d\n", sizeof(char*), sizeof(s), sizeof(*s));
}

/*
Results should be 1 4 1
4 4 1
Explanation:
Sure, let's break down the outputs of the given C code considering a 32-bit operating system.

### Code
```c
#include<stdio.h>

void main() {
    char *s = "hello";
    char ch = 'a';
    printf("%d %d %d\n", sizeof(char), sizeof('a'), sizeof(ch));
    printf("%d %d %d\n", sizeof(char*), sizeof(s), sizeof(*s));
}
```

### Explanation of Outputs
1. **First `printf` statement:**
    ```c
    printf("%d %d %d\n", sizeof(char), sizeof('a'), sizeof(ch));
    ```
    - `sizeof(char)`: This is the size of a `char` type, which is 1 byte.
    - `sizeof('a')`: This is a bit tricky. In C, character literals like `'a'` are of type `int`, not `char`. Therefore, `sizeof('a')` will be the size of an `int`, which is 4 bytes on a 32-bit system.
    - `sizeof(ch)`: This is the size of the variable `ch`, which is of type `char`, so it is 1 byte.

    **Output:**
    ```
    1 4 1
    ```

2. **Second `printf` statement:**
    ```c
    printf("%d %d %d\n", sizeof(char*), sizeof(s), sizeof(*s));
    ```
    - `sizeof(char*)`: This is the size of a pointer to `char`. On a 32-bit system, pointers are 4 bytes.
    - `sizeof(s)`: This is the size of the variable `s`, which is a pointer to `char`. Therefore, it is also 4 bytes.
    - `sizeof(*s)`: `*s` is the value pointed to by `s`, which is of type `char`. Therefore, it is 1 byte.

    **Output:**
    ```
    4 4 1
    ```

### Summary of Outputs:
```
1 4 1
4 4 1
```

### Detailed Output Explanation:
- `sizeof(char)` is always 1 byte as per the C standard.
- `sizeof('a')` is 4 bytes because character literals in C have the type `int`.
- `sizeof(ch)` is 1 byte because `ch` is of type `char`.
- `sizeof(char*)` is 4 bytes because, on a 32-bit system, pointers are 4 bytes.
- `sizeof(s)` is 4 bytes because `s` is a `char*` (pointer to `char`).
- `sizeof(*s)` is 1 byte because `*s` dereferences the pointer `s` to give a `char`.

Thus, the outputs of the code on a 32-bit system are as expected.
*/