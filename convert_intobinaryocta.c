#include<stdio.h>
void binary(int n)
{
    int i[50],sum=0,k=0;
 while(n!=0)
 {
      sum=n%2;
      n=n/2;
      i[k]=sum;
      k++;
 }
 for(int j=k-1;j>=0;j--)
 printf("%d",i[j]);
 printf("\n");
}
void octal(int n)
{
  int i[50],sum=0,k=0;
  while(n!=0)
  {
    sum=n%8;
    n=n/8;
    i[k]=sum;
    k++;
  }
  for(k-1;k-1>=0;k--)
  printf("%d",i[k-1]);
  printf("\n");
}
void hexal(int n)
{
  char i[50];
  int k=0,sum=0;
  while(n!=0)
  {
    sum=n%16;
    n=n/16;
    if(sum==10||sum==11||sum==12||sum==13||sum==14||sum==15)
    {
    sum=64+sum%9;
    i[k]=sum;
  }
  else
  i[k]=sum+48;
  k++;
  }
  for(int j=k-1;j>=0;j--)
  printf("%c",i[j]);
}
void main()
{
   int n;
   printf("enter");
   scanf("%d",&n);
   binary(n);
   octal(n);
   hexal(n);
   }
