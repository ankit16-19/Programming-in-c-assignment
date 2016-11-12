//count the number of digits in a integer
#include<stdio.h>
main()
{
    printf("Enter a integer:\n");
    int num;
    scanf("%d",&num);
    int i=num,count=0;
    while(i!=0)
    {
       i = i/10;
       count++;
    }
    printf("Number of digits in the entered number are:\n%d",count);
}
