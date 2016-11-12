//floyd's triangle
#include<stdio.h>
main()
{
    printf("Enter a number to print floyd's triangle:\n");
    int num;
    scanf("%d",&num);
    int i;
    for(i=1;i<=num;i++)
    {
        int j=1;
        while(j<=i)
        {
            int static k=1;
            printf("%d ",k);
            k++;
            j++;
        }
        printf("\n");
    }
}
