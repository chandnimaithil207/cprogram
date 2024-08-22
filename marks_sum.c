#include<stdio.h>
int main()
{
    int i;
    float marks[5];
    float sum=0.0;
    float avg;
    printf("Enter the marks of the students");
    for(i=0;i<5;i++)
    
        scanf("%f",&marks[i]);
    
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
        printf("Sum : %f \n",sum);
        printf("Avg : %f \n",avg);
    
    return 0;
}
