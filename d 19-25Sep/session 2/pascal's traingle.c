//pascal's triangle
#include<stdio.h>
main()
{
    printf("Enter a integer to print pascal's triangle:\n");
    int num;
    scanf("%d",&num);
    int q=num-1,i;
    for(i=0;i<num;i++)
    {
        int h;
      for(h= 0;h<=(num-i-2); h++)
         printf(" ");
        int j;
        for(j=0;j<=i;j++)
            printf("%ld ",factorial(i)/(factorial(j)*factorial(i-j)));//logic for pascal's triangle

        printf("\n");
    }
}
int  factorial(int n)
{
   int c;
   int result = 1;

   for (c = 1; c <= n; c++)
         result = result*c;

   return result;
}

