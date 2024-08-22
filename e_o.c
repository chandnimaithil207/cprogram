#include <stdio.h>
int main()
{
    int a[5], i;
    int even = 0, odd = 0;
    printf("Enter the elements of an array");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("even no:%d \n", even);
    printf("odd no: %d \n", odd);

    return 0;
}
