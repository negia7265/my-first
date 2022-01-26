#include<stdio.h>
void main()
{
    int n,t;
    printf("enter limit");
    scanf("%d",&n);
    int a[n];
    for(int i=i;i<n;i++)
      scanf("%d",&a[i]);
      for(int i=0;i<n;i++)
      {
          for(int j=i+1;j<n;j++)
          {
              if(a[i]>a[j])
               {
                   t=a[i];
                   a[i]=a[j];
                   a[j]=t;
               }
          }
      }
     for(int i=0;i<n;i++)
     printf("%d ",a[i]);

}