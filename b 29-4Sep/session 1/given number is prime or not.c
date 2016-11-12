//a given number is prime or not
#include<stdio.h>
main()
{
    printf("Enter a number:\n");
    int num;
    scanf("%d",&num);
    int i,count=0;
    for(i=2;i<num;i++)
    {
        if((num%i)==0)
            count++;
    }
    if(count==0)
        printf("Entered number is prime");
    else
        printf("Entered number is not prime");




}
