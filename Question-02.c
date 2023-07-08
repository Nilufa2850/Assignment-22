/*Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int *p , i , n ;
    float sum = 0.0 ,avg ;

    printf("Enter size of array : ") ;
    scanf("%d",&n) ;

    p = (int*) calloc (n,sizeof(int)) ;

    if (p == NULL)
    {
        printf("Memory allocation failed.");
        return 0 ;
    }


    printf("Enter %d array values : ", n) ;
    for(i=0 ; i<n ; i++)
        scanf("%d",(p+i)) ;

        
    for(i=0 ; i<n ; i++)
        sum = sum + *(p+i) ;  // p[i] ~ *(p+i)
    

    avg = sum / n ;

    printf("\nAverage is %.1f",avg) ;

    return 0 ;
}
