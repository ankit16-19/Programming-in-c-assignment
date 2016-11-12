//change an integer to words
#include<stdio.h>
main()
{
    printf("Enter an integer(<1000): ");
    int num;
    scanf("%d",&num);
    char st[10];
    int i=num,s[5],t=0;
    while(i!=0)
    {
        s[t] = i%10;
        t++;
        i = i/10;
    }
     int u;
    for(u=3;u>0;u--)
    {

     switch(s[u-1])
    {
    case 9:
        printf("NINE ");
        break;
    case 8:
        printf("EIGHT ");
        break;
    case 7:
        printf("SEVEN ");
        break;
    case 6:
        printf("SIX ");
        break;
    case 5:
        printf("FIVE ");
        break;
    case 4:
        printf("FOUR ");
        break;
    case 3:
        printf("THREE ");
        break;
    case 2:
        printf("TWO ");
        break;
    case 1:
        printf("ONE ");
        break;
    case 0:
        printf("ZERO ");
        break;
    }

    }
}
