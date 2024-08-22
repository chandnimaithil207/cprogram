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
int temp,j;
for(int i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
if(a[i]<a[j])
{
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    
}


}
printf("%d \n",a[i]);
}
return 0;
}
