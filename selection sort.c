#include <stdio.h>
void read(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
}    
    
void swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void sort(int a[],int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
   {
       min=i;
       for(j=i+1;j<n;j++)
       {
           if(a[j]<a[min])
           min=j;
       }
     if(min!=1)
     swap(&a[i],&a[min]);
   }
}   
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf("\n");
        
    }
}
int main()
{
    int n,a[100];
    printf("enter no.of elements");
    scanf("%d",&n);
    printf("enter elements");
    read(a,n);
    sort(a,n);
    print(a,n);
}    
