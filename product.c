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
    for(int i=0;i<n;i++)
  printf("%d \n",a[i]);

int product = 1;
for(int i=0;i<n;i++)
{
     product=product*a[i];
}
     printf("The product of all the elements in an array is %d \n",product);
     return 0;
}