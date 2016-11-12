//multiplication table
#include<stdio.h>
#include<math.h>
main()
{
    printf("Enter a number to get the multiplication table:\n");
    int num;
    scanf("%d",&num);
    int i;
    printf("Multiplication table is:\n");
    for(i=1;i<=10;i++)
    {
        int z;
        z = num*i;
        printf("%d x %d = %d\n",num,i,z);
    }

}
