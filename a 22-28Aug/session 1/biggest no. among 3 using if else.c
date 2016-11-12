//biggest no. among 3 using if else
#include<stdio.h>
main()
{
    printf("Enter three integers to compare:\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int big;
    big = a;
    if(b>big&&b>c)
        big = b;
    if(c>big&&c>b)
        big = c;
    printf("%d",big);
}
