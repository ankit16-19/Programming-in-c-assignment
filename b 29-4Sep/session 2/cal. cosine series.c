//value of cosine(x)
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
    printf("Enter x for cos(x):");
    int x;
    scanf("%d",&x);
    int q;
    float cosine=0;
    for(q=0;q<10;q++)
    {
        cosine = cosine + ((pow(-1,q)*pow(x,(2*q))/fact((2*q))));
    }
    printf("cos(%d)\n %.2f",x,cosine);
}
