#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of an arrray");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the elements of an array:");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        // for(int j=(n-1)-i;j<i;j--)
        // {
        int t;
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
        
    
        
    for(int i=0;i<n;i++)
    printf("%d\n",a[i]);
        
    }
    
}
