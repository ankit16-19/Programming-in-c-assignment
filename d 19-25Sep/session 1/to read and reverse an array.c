//to read and reverse an array
#include<stdio.h>
#include<string.h>
main()
{
    int arry[20];
    int i;
    printf("How many members you will enter:\n");
    int num;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("\nEnter arry[%d]:\n",i);
        scanf("%d",&arry[i]);
    }
    arry[i]='\0';
    int arry1[20];
    int j,n=1;
    for(j=0;j<i;j++)
    {
        if((i-n)>=0)
         arry1[j]=arry[i-n];
        n++;
    }
    arry1[j]='\0';
    printf("\nReversed array is:\n");
    for(j=0;j<i;j++)
    {
        printf(" %d ",arry1[j]);
    }


}
