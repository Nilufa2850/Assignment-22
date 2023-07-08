//7. Write a program to demonstrate memory leak in C.

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int *p ;
    p = (int*) malloc(sizeof(int)) ;

    p = NULL ;  // Address of malloc is unreserved.
    return 0 ;
}
