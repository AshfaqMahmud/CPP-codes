#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    int i=0, sum = 0;
    scanf("%d",&n);
    fflush(stdin);
    int *p = malloc(sizeof(int)*n);
    if(p!=NULL)
    {
        while(i<n){
            scanf("%d",&p[i]);
            sum = sum + p[i];
            i++;
        }
    }
    printf("%d",sum);
    free(p);
    return 0;
}