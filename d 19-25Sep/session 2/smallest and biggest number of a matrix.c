//smallest and biggest number of a matrix
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
    int small = a[0][0];
    for(i=0;i<row;i++)
    {
        int j;
        for(j=0;j<col;j++)
        {
            if(a[i][j]<small)
                small=a[i][j];
        }
    }
    int big = a[0][0];
    for(i=0;i<row;i++)
    {
        int j;
        for(j=0;j<col;j++)
        {
            if(a[i][j]>big)
                big=a[i][j];
        }
    }
    printf("smallest number in the matrix is:\n%d",small);
    printf("\nbiggest number in the matrix is:\n%d",big);
}

