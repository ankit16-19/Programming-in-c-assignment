//factorial
#include<stdio.h>
main()
{
    printf("Enter a number to find factorial:\n");
    int num;
    scanf("%d",&num);
    int i,fact=1;
    for(i=1;i<=num;i++)
    {
      fact=fact*i;
    }
    printf("The factorial of %d is :\n%d",num,fact);

}
