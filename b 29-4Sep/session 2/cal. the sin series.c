//value of sin(x)
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
    printf("Enter x for sin(x):");
    int x;
    scanf("%d",&x);
    int q;
    float sin=0;
    for(q=0;q<10;q++)
    {
        sin = sin + ((pow(-1,q)*pow(x,((2*q)+1))/fact(((2*q)+1))));
    }
    printf("sin(%d)=\n %.2f",x,sin);
}
