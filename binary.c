#include<stdio.h>
void main()
{
    int n,rem,sum=0;
    printf("enter number");
    scanf("%d",&n);
    for(int i=1;n>0;i=i*10)
    {
        rem=n%2;
        n=n/2;
        sum=sum+rem*i;
    }
    printf("%d",sum);
}