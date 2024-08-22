#include<stdio.h>
int main()
{
    int n,x,c=0;
    {
    printf("enter the size of the array :");
    scanf("%d",&n);
    }
    int a[n];
    for(int i=0;i<n;i++)
{
    printf("enter the elements of the array :");
    scanf("%d",&a[i]);
}
{
    printf("enter the number to be count :");
    scanf("%d",&x);
}
    for(int i=0;i<n;i++)
{
    if(x==a[i])
    c++;
}
printf("Number of times the %d occur in an array is %d",x,c);
return 0;
}