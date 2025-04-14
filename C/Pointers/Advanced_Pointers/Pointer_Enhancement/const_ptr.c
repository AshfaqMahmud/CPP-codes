int main(void) { 
    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int array2[] = {1, 2, 3}; 
    int *const p = array1;
 
    p = array2;     
    array1 = array2; 
 
    return 0; 
}
