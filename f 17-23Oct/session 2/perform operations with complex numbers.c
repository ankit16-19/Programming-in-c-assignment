//perform operations with complex numbers
#include<stdio.h>
#include<stdlib.h>
main()
{
    struct complex
    {
        int real;
        int img;
    }c;
    FILE *f;
    f = fopen("complex.txt","w+");
    int i,real,img;
    for(i=0;i<2;i++)
    {
        printf("Enter the real and img. values:\n");
        scanf("%d%d",&c.real,&c.img);
        fwrite(&c,sizeof(c),1,f);

    }
    fclose(f);
    f = fopen("complex.txt","r");
    system("cls");
    printf("Entered complex numbers are:\n");
    while(fread(&c,sizeof(c),1,f)==1)
    {
      printf("%d + i%d\n",c.real,c.img);
    }
    fclose(f);
    printf("Operations with complex numbers:\nTO add complex numbers enter '+':\nTo multiply complex numbers enter '*':\n");
    fflush(stdin);
    char opr = getche();
    system("cls");
    switch(opr)
    {
        case '+':
            printf("Sum of the complex numbers is:\n");
            f = fopen("complex.txt","r");
            int sreal=0,simg=0;
            while(fread(&c,sizeof(c),1,f)==1)
            {
                sreal+=c.real;
                simg+=c.img;
            }
            printf("%d + i%d",sreal,simg);
            fclose(f);
            break;
        case '*':
            printf("Multiplication of the complex number is:\n");
            f = fopen("complex.txt","r");
            int a=1,b=1,d=1,e=1;
            while(fread(&c,sizeof(c),1,f)==1)
            {
                a*=c.real;
                d*=c.img;
                e= b*(c.real+c.img);
                b= c.real;
            }
            printf("%d + i%d",a-d,e);
            fclose(f);
            break;
    }




}
