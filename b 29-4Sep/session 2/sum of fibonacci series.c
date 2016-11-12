// sum of fibonacci series
#include<stdio.h>
main()
{
    printf("Enter a no. to print fibonacci series:\n");
    int num;
    scanf("%d",&num);
    int i,sum=0;
    printf("0, 1,");
    for(i=2;i<num;i++)
    {
        int c;
        static a=0,b=1;
        c = a+b;
        printf(" %d,",c);
        int temp;
        temp=b;
        b=c;
        a=temp;
        sum+=c;
    }
    printf("\nSum of the fibonacci series is: %d ",(sum+1));
}
