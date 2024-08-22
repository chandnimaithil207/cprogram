#include<stdio.h>
int main()
{
    int n;
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
int max=a[0];
for(int i=0;i<n;i++)
{
if(max<a[i])
{
    max=a[i];
}
}
printf("maximum elemnt in an array is %d",max);
return 0;
}
