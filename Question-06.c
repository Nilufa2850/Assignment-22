/*6. Write a program in C to find the largest element using Dynamic Memory Allocation.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int *p , i , n , max = -9999999 ;
    printf("Enter size of array : ");
    scanf("%d",&n) ;

    p = (int*) calloc(n,sizeof(int)) ;

    printf("Enter %d number : ",n) ;

    for(i=0 ; i<n ; i++)
        scanf("%d",(p+i) ) ;

    for(i=0 ; i<n ; i++)
        if (p[i] > max)
            max = p[i] ;
    
    printf("Maximum number is %d",max) ;
    return 0 ;

}
