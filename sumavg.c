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

int sum = 0,avg;
for(int i=0;i<n;i++)
{
     sum+=a[i];
     avg=(sum/n);
}
     printf("The sum of all the elements in an array is %d \n",sum);
      printf("The average of all the elements in an array is %d \n",avg);
     return 0;
}