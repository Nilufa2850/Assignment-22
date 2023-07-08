//10. Find out the maximum and minimum from an array using dynamic memory allocation in C.

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int *p , n , i , max=-9999 , min=100000 ;
    printf("Enter size of array : ");
    scanf("%d",&n) ;

    p = (int*) malloc (n) ;

    if ( p == NULL)
    {
        printf("Memory Aloocation Failed.") ;
        return 0 ;
    } 

    printf("Enter %d number : ",n) ;
    for(i=0 ; i<n ; i++)
        scanf("%d",(p+i)) ;

    for(i=0 ; i<n ; i++)
        if ( p[i] > max)
            max = p[i] ;
    printf("Maximum number is %d",max) ;

    for(i=0 ; i<n ; i++)
        if ( p[i] < min)
            min = p[i] ;
    printf("\nManimum number is %d",min) ;
        

    return 0 ;
}
