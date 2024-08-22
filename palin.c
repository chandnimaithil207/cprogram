#include<stdio.h>
int main()
{
    int i,n;
    int num;
    printf("enter the size of an array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int sum=0;
        int t;
        t=a[i];
        while(t!=0)
        {
            num=t%10;
            sum=sum*10+num;
            t=t/10;
        }
        if(sum==a[i])
        {
             printf("palindrome : %d\n",a[i]);
        }
    
         else
        {
            printf("%d is not palindrome \n",a[i]);
        }
    }
       
    return 0;
}