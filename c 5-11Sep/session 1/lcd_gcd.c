//lcm and gcd
#include<stdio.h>
main()
{
    int  a,b;
    printf("Enter two numbers to take the LCM:\n");
    scanf("%d%d",&a,&b);
    int small;
    small = (a>b) ? b:a;
    int i,gcd,count=0;
    for(i=2;i<=small;i++)
    {
        if((a%i)==0 && (b%i)==0)
           {
             gcd = i;
             count++;
           }

    }
    if(count!=0)
    printf("GCD of %d and %d is:\n%d\n",a,b,gcd);
    if(count==0)
        printf("NO GCD possible\n");

    //lcm
    int big;
    big = (a>b) ?a:b;
    while(1)
    {
        if((big%a)==0 && (big%b)==0)
           {
              printf("LCM of %d and %d is:\n%d\n",a,b,big);
              break;
           }
           ++big;

    }






}
