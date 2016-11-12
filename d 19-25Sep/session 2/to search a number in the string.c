//to search a number in the sting
#include<stdio.h>
main()
{
    printf("Enter the number of numbers you want to enter:\n");
    int num;
    scanf("%d",&num);
    int arr[100],i;
    printf("Enter numbers:\n");
    for(i=0;i<num;i++)
        scanf("%d",&arr[i]);
    printf("Enter the number you want to search:\n");
    int snum;
    scanf("%d",&snum);
    int x[100],z=0,count=0;
    for(i=0;i<num;i++)
    {
        if(arr[i]==snum)
        {
            x[z]=i;
            z++;
            count++;
        }
    }
    if(count>0)
    {
        printf("The place of searched number in array is:\n");
        for(i=0;i<z;i++)
            printf("%d ",x[i]);
    }


}
