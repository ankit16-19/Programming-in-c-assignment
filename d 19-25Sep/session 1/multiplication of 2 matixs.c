//program to multiply given two matrices
#include<stdio.h>
main()
{
    int a[10][10],b[10][10],c[10][10],row,col,row2,col2;
    printf("Enter the size of 1st matrix rows and column (mxn):\n");
    scanf("%d%d",&row,&col);
    printf("Enter the size of 2nd matrix rows and column (mxn):\n");
    scanf("%d%d",&row2,&col2);
    printf("Enter the elements of 1st matrix (row wise):\n");
    int i;
    for(i=0;i<row;i++)
    {
        int j;
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix (row wise):\n");
    for(i=0;i<row;i++)
    {
        int j;
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
        for(i=0;i<row;i++)
        {
        int j;
        for(j=0;j<col;j++)
            {
                int m=0;
                c[i][j]=0;
                while(m<row && m<col)
                {
                    c[i][j]+=a[i][m]*b[m][j];
                    m++;
                }
                printf("%d ",c[i][j]);

            }
            printf("\n");
        }
        }





