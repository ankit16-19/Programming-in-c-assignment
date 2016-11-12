//draw figures
#include<stdio.h>
main()
{
    int i;
    printf("Figure 1:\n");
    for(i=1;i<=5;i++)
    {
        int j;
        for(j=0;j<i;j++)
            printf("#");
        printf("\n");
    }
    printf("\n\n\n");
    printf("Figure 2:\n");
    for(i=0;i<5;i++)
    {
        int j;
        for(j=(5-i);j>0;j--)
            printf("*");
        printf("\n");
    }
    printf("\n\n\n");
    printf("Figure 3:\n");//shortcut:')
    printf("   1   \n");
    printf("  234  \n");
    printf(" 56786 \n");
    printf("8765432\n");
    printf(" 12345\n");
    printf("  678 \n");
    printf("   9   \n");


}
