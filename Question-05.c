/*5. Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int *p , i , n ,sum=0 ;
    printf("Enter size of array : ");
    scanf("%d",&n) ;

    p = (int*) calloc(n,sizeof(int)) ;

    printf("Enter %d number : ",n) ;

    for(i=0 ; i<n ; i++)
        scanf("%d",(p+i) ) ;

    for(i=0 ; i<n ; i++)
        sum = sum + *(p+i) ; // p[i] ~ *(p+i)

    printf("Sum is %d",sum) ;
    return 0 ;

}
