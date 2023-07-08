/*1. Define a function to input variable length string and store it in an array without
memory wastage.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char *p ,ch ;
    int i , j=1 ;

    p = (char*) malloc (sizeof(char)) ;

    printf("Enter String : ") ;

    for (i=0 ; ch != '\n' ; i++)
    {
        scanf("%c",&ch) ;
        j++ ;
        p = (char*) realloc (p , j*sizeof(char)) ;
        p[i] = ch ;
    }

    p[i] = '\0' ;

    printf("\nThe entered string is - %s",p) ;
    return 0 ;
}

