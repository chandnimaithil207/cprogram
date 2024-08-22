#include<stdio.h>
int main()
{
    int n;
    int c=0;
    printf("enter size of array :");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the element of an array");
    scanf("%d",&a[i]);
    }


    for (int i=0;i<n;i++)
    {
        for(int j=1;j>=a[i];j++){
        while(a[i]%j==0)
        {
            c++;
        }
        if(c==2)
        {
            printf("%d is a prime no.",a[i]);
        }
    }
    }
}
