/*9. Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int *p , n , i ;
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
        printf("%d ",p[i]) ; // p[i] = *(p+i)
        
    return 0 ;
}
