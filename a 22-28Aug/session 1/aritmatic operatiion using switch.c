//arithmetic operation using switch
#include<stdio.h>
main()
{
    printf("Enter '+' for addition\nEnter '-' for subtraction\nEnter '*' for multiplication\nEnter '/'for division\n ");
    char sign;
    scanf("%c",&sign);
    printf("Enter the two numbers to use with the operator:\n");
    float a,b;
    scanf("%f%f",&a,&b);
    float c;
    switch(sign)
    {
        case '+':
            c = a+b;
            break;
        case '-':
            c = a-b;
            break;
        case '*':
            c = a*b;
            break;
        case '/':
            c = a/b;
            break;
    }
    printf("%.2f",c);
}

