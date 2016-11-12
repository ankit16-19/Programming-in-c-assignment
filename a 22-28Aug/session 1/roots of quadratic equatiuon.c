//roots of the quadratic equation
#include<stdio.h>
#include<math.h>
main()
{
    printf("for the quadratic equation ax^2 + bx + c Enter the values of a,b,c to calculate the root of equation:\n");
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    int d;
    d = pow(b,2) - 4*a*c;
    float root1,root2;
    printf("%f\n",d);
    if(d==0)
    {
        root1 = -(b/(2*a)) ;
        root2 = -(b/(2*a));
        goto xy;
    }
    else if(d>0)
    {
        root1 = (-b + sqrt(d))/(2*a);
        root2 = (-b - sqrt(d))/(2*a)
        ;
        goto xy;
    }
    else if(d<0)
    {
        printf("Root are imaginary");
    }
    xy:
        printf("Roots of the equation %.01fx^2 + %.01fx + %.01f are: \n%.02f\n%.02f",a,b,c,root1,root2);



}
