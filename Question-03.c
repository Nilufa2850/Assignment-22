// Write a program to calculate the sum of n numbers entered by the user using malloc and free.

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int *p , n , sum=0 , i ;

    printf("Enter size of array : ") ;
    scanf("%d",&n) ;

    p = (int*) malloc(n) ;

    if (p==NULL)
    {
        printf("memory allocation failed.");
        return 0 ;
    }

    printf("Enter %d number : ",n) ;
    for(i=0 ; i<n ; i++)
        scanf("%d",(p+i)) ;

    for(i=0 ; i<n ; i++)
        sum = sum + *(p+i) ;

    printf("Sum is %d",sum) ;

    free (p) ;
    return 0 ;

}
