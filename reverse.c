#include<stdio.h>
void main()
{
    int n,n1=0,rem;
    printf("enter number");
    scanf("%d",&n);
    while(n>0)
    {
        
        n1=n1*10+n%10;
        n=n/10;
    
    }
    printf("reverse %d",n1);
}