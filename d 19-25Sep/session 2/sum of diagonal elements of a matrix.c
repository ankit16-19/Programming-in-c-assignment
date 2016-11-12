//sum of diagonal elements of a given matrix
#include<stdio.h>
main()
{
    int a[10][10],row,col;
    printf("Enter the size of matrix rows and column (nxn)[square matrix]:\n");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of matrix (row wise):\n");
    int i;
    for(i=0;i<row;i++)
    {
        int j;
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<row;i++)
    {
        int j;
        for(j=0;j<col;j++)
        {
            if(i==j)
            sum+=a[i][j];
        }
    }

    printf("sum of diagonal elements of the matrix is:\n%d",sum);

}
