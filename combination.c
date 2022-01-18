#include<stdio.h>
int fact(int a)
{
    int sum=1;
    for(int i=1;i<=a;i++)
    sum=sum*i;
    return(sum);
}
float comb(int n,int r)
{
    float cn=(fact(n))/(fact(n-r)*fact(r));
    return (cn);
}
void main()
{
int n,r;
printf("enter n and r");
scanf("%d%d",&n,&r);
printf("the combination is %f",comb(n,r));
}