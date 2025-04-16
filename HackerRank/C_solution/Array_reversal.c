#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    
    int low = 0, high = num-1;
    while(low<high)
    {
        arr[low] = arr[low] ^ arr[high];
        arr[high] = arr[low] ^ arr[high];
        arr[low] = arr[low] ^ arr[high];
        
        low++; high--;
    }

    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}