//to reverse a integer
#include<stdio.h>
main()
{
    printf("Enter a number to reverse its digits:\n");
    int num;
    scanf("%d",&num);
    int i=num;
    while(num!=0)
    {
        i = num%10;
        num = num/10;
        printf("%d",i);
    }

}
