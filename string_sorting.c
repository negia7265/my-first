#include<stdio.h>
#include<string.h>
#define IT 5
#define MAX 20
void main()
{
 char string[IT][MAX],dummy[MAX];
 printf("enter");
 for(int i=0;i<IT;i++)
 scanf("%s",string[i]);
 for(int i=0;i<IT;i++)
 {
     for(int j=i+1;j<IT;j++)
     {
         if(strcmp(string[i],string[j])>0)
         {
           strcpy(dummy,string[i]);
           strcpy(string[i],string[j]);
           strcpy(string[j],dummy);
         }
     }
     printf("%s\n",string[i]);
 }
}