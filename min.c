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
int min=a[n];
for(int i=0;i<n;i++)
{
if(min>a[i])
{
    min=a[i];
}
}
printf("minimum elemnt in an array is %d",min);
return 0;
}
