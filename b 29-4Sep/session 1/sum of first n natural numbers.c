//to find the sum of first n natural numbers
#include<stdio.h>
main()
{
    printf("Enter a numbers:\n");
    int num;
    scanf("%d",&num);
    int i,sum=0;
    for(i=1;i<=num;i++)
    {
        sum = sum + i;
    }
    printf("Sum of first n natural numbers is:\n%d",sum);
    int avg = sum/num;
    printf("\nAverage is %d",avg);
}
