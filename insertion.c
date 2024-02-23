#include <stdio.h>
 int main()
{
     int i,j,a[20],temp,n;
     printf ("enter the size of the array\n");
     scanf("%d",&n);
     printf("enter the array element:");
     for (i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     for(i=1;i<n;i++)
     {
         temp=a[i];
         for (j=i;j>0&&temp<a[j-1];j--)
         {
            a[j]=a[j-1];
         }
         a[j]=temp;
     }
     printf("sorted array\n");
     for(i=0;i<n;i++)
         printf("%d\t",a[i]);
}
