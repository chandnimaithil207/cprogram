#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<=(n-1);i++)
    {
        printf("enter the elements of an array:");
        scanf("%d",&a[i]);
    }
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        b[i]=a[n-1-i];
         
    }
    for(i=0;i<n;i++)
    {
      
         printf("%d ",b[i]);
    }
   
return 0;
}