//binary to decimal
#include<stdio.h>
main()
{
     printf("Enter a number to change to decimal:\n");
     int num;
     scanf("%d",&num);
     int i=num,j;
     for(i=num;i>0;i=i/2)
     {
         j = i%2;
         printf("%d",j);
     }
}
