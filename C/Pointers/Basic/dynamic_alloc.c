#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void get_memory(char **p, int num) {
    if (p == NULL)
        return;
        
    *p = malloc(num);
    if (*p == NULL) {
        // handle allocation failure
        return;
    }
}

int main(void) {
    char *str = NULL;
    get_memory(&str, 100);
    strcpy(str, "Hello World!");
    printf(str);
    free(str);  // don't forget to free
    return 0;
}

/*Documentation for clarification neeeded*/