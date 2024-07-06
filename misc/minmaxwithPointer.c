// Online C compiler to run C program online
#include <stdio.h>

void minMax(int arr[], int len, int *min, int *max){
    *min=*max= arr[0];
    int i=1;
    while(i<len){
        if(*min<arr[i]){
            *min = arr[i];
        }else if(*max>arr[i]){
            *max=arr[i];
        }
        ++i;
    }
}
int main() {
    int a[] = {2,8,11,23,4,6, 76,21,3};
    int len = sizeof(a)/sizeof(a[0]);
    int min, max;
    
    minMax(a,len,&min,&max);
    
    printf("Min is %d \nMax is %d",min,max);
    return 0;
}