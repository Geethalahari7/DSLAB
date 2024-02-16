#include<stdio.h>
int main()
{
   int a[50],i,j,n,rev[50];
   printf("enter array size");
   scanf("%d",&n);
   printf("enter array elements");
   for(i=0;i<n;i++)
   {
       scanf("%5d",&a[i]);
   }
   for(i=n-1;i>=0;i--)
   {
      rev[j]=a[i];
      j++;
   }
   printf("reverse arrayis");
   for(i=0;i<n;i++)
   {
     printf("%5d",rev[i]);
   }
   }   
