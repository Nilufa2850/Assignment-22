// 4. Write a program to input and print text using dynamic memory allocation.

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char *p ,ch;
    int i , j=1 ;

    p = (char *) malloc(sizeof(char)) ;

    printf("Enter a string : ");

    for(i=0 ; ch!='\n' ; i++)
    {
        scanf("%c",&ch) ;
        j++ ;
        p = (char*)realloc (p,sizeof(char)*j) ;
        p[i] = ch ;
    }

    p[i] = '\0' ;

    printf("Entered string is %s",p) ;
    return 0 ;
}
