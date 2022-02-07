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
}
void main()
{
   int n;
   printf("enter");
   scanf("%d",&n);
   binary(n);
   }
