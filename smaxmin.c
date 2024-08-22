#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    {
        printf("enter the size of the array :");
        scanf("%d", &n);
    }
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the elements of the array :");
        scanf("%d", &a[i]);
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    int min = INT_MAX;
    int smin = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            smax = max;
            max = a[i];
        }
        else if (smax < a[i]&& max!=a[i])
        {
            smax = a[i];
        }
    }
    printf("second maximum elemnt in an array is %d", smax);
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            smin = min;
            min = a[i];
        }
        else if (smin > a[i]  && min!=a[i])
        {
            smin = a[i];
        }
    }
    printf("second minimum elemnt in an array is %d", smin);
        return 0;
}

