// #include<stdio.h>
// int diff(int);
// int main()
// {
//   int n,c,i;
//   printf("enter the size of an array");
//   scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++){
//     printf("enter the elements in an aaray");
//     scanf("%d",&a[i]);
//     }
//   c=diff(a[n]);
//   printf("%d",c);
//   return 0;
// }
// int diff(int n){
// int i,even=0,odd=0,diff;
// int a[i];
// for( i=0;i<n;i++){
//     if(i%2==0)
// {
//     even+=n;
// }
//     else{
//     odd+=a[i];
// }
// diff=even - odd;
// printf("differnece b/w the sum of even and odd indexs of an array %d : ",diff);
// }
// return diff;
// }

#include <stdio.h>
int main()
{
    int n, i, even = 0, odd = 0, diff;
    printf("enter the size of an array");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the elements in an aaray");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            even += a[i];
        }
        else
        {
            odd += a[i];
        }
    }
        diff = even - odd;
        printf("differnece b/w the sum of even and odd indexs of an array %d : ", diff);
    return 0;
}