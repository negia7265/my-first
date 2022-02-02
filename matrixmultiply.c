#include<stdio.h>
void main()
{
    int n;
    printf("enter order");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n],sum=0;
    printf("enter elements of a");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("enter elements of b");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                sum=a[i][k]*b[k][j]+sum;

            }
            c[i][j]=sum;
            printf("%d ",c[i][j]);
            sum=0;
        }
        printf("\n");
    }
    
}