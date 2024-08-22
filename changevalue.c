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
    scanf(" %d",&a[i]);
}
 for(int i=0;i<n;i++)
{
  printf("The element in a given array is %d \n",a[i]);
}
int even,odd;
for(int i=0;i<n;i++)
{
if(i%2!=0)
{
   odd=a[i]*2;
   printf("%d \n",odd);
}
else
{
    even=a[i]+10;
     printf("%d \n",even);
}
}
return 0;
}
