#include<stdio.h>
double power(int,int);
int main()
{
    int x,y;
    double z;
printf("enter x,y");
scanf("%d%d",&x,&y);
z=power(x,y);
printf("%d to the power %d is %lf",x,y,z);
return 0;
}
double power(int x,int y)
{
    double pow=1.00;
    if(y>0)
    {
        for(int i=1;i<=y;i++)
        pow=pow*x;
    }
    else
    {
    for(int i=-1;i>=y;i--)
    pow=pow*(1.00/x);
    }
    return pow;
}