//draw figure
#include<stdio.h>
main()
{
    printf("Enter a no. to print pyramid:\n");
    int num;
    scanf("%d",&num);
    int i;
    for(i=1;i<=num;i++)
    {
        int j;
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }

        int k;
        for(k=(i-1);k>0;k--)
        {
            if(k!=0)
            {
                printf("%d",k);
            }
        }
        printf("\n");
    }

}
