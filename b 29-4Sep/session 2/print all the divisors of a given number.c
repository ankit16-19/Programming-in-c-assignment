//print all the divisors of a given number
#include<stdio.h>
main()
{
    printf("Enter a number to find all divisors:\n");
    int num;
    scanf("%d",&num);
    int i,div;
    printf("Divisors of the entered numbers are:\n");
    for(i=1;i<num;i++)
    {
        div=num%i;
        if(div==0)
        {
            printf("%d ",i);
        }
    }

}
