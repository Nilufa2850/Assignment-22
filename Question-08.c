//8. Write a program to demonstrate dangling pointers in C.

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int *p ;
    p = (int*) malloc(sizeof(int)) ;

    *p = 10 ;

    printf("Before free - %d",*p) ;
    free(p) ;
    printf("\nAfter free - %d",*p); // dangling pointer.
    return 0 ;
}
