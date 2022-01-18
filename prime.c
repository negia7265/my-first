#include<stdio.h>
void prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
        if(c==2)
        printf("prime");
        else
        printf("composite");
}
void main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    prime(n); 
}
