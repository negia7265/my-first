#include<stdio.h>
#include<ctype.h>
void main()
{
    char al;
    printf("enter alphabet\n");
    al=getchar();
    if(islower(al))
    putchar(toupper(al));
    else
    putchar(tolower(al));
}