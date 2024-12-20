#include<stdio.h>

int main()
{
    int arra2d[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int i = 0;
    int *p = arra2d;                                      //2d array as 1d array
    printf("%d %d\n",arra2d[2][3],arra2d[1][2]);          //result as expected
    printf("%d %d\n",arra2d[1][5],arra2d[3][0]);          //result not what we think
    /*
        Explanation:
        {1,2,3,4},      <------------- arr2d[0]
        {5,6,7,8},      <------------- arr2d[1]
        {9,10,11,12}    <------------- arr2d[2]

        As arr2d[1][5] is being accessed, at first arr2d[1] will be accessed 
        -----then it will go 5 element forward meaning value 10

        but arr2d[3] is out of bound so arr2d[3][0] will mean garbage  
    */

   // Pointer access of an array
   for(i = 0; i<12 ; ++i)
   {
        printf("%d ",p[i]);
   }

   return 0;
}