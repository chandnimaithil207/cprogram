#include<stdio.h>
int main()
{
    int i,n,x,k;
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
    printf("enter the sum for which has to be count :");
    scanf("%d",&x);
}
    for(int i=0;i<n;i++)
{
        for(int j=i+1;j<n;j++)
        {
            for(int k=i+2;k<n;k++)
        {
            if(a[i]+a[j]+a[k]==x)
            printf("elements wisee:(%d,%d,%d) \n",a[i],a[j],a[k]);
        }
}
}
return 0;

}