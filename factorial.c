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

int fact=1,i;
int brr[n];
    for(i=0;i<n;i++)
    {
        fact=fact*a[i];
        brr[i]=fact;
    }

     printf("The factorial of all the elements in an array is %d \n",brr[i]);
    
}