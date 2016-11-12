//sum of digits of a three digit number
#include<stdio.h>
main()
{
    printf("Enter a three digit number:\n");
    int num;
    scanf("%d",&num);
    int i,sum=0;
    while(num!= 0)
    {
        i = num%10;
        num = num/10;
        sum = sum+i;
    }
    printf("Sum of digits of the no. is:\n%d",sum);

}
