//value of exp(x)
#include<stdio.h>
#include<math.h>
fact(int x)
{
    int i,fact=1;
    for(i=x;i>=1;i--)
      fact = fact*i;
    return fact;
}

main()
{
    printf("Enter x for e^x");
    int x;
    scanf("%d",&x);
    int q;
    float exp=0;
    for(q=0;q<6;q++)
    {
        exp = exp + (pow(x,q)/fact(q));
    }
    printf("exp^x =\n %.2f",exp);
}
