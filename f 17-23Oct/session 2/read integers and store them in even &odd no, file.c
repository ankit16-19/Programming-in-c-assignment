//read integers and store them in even &odd no, file
#include<stdio.h>
main()
{
    int array[100];
    printf("Enter number of integers you want to enter:\n");
    int num;
    scanf("%d",&num);
    FILE *f,*p;
    f =fopen("even.txt","w");
    p =fopen("odd.txt","w");
    int i;
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]%2==0)
            fwrite(&array[i],sizeof(array[i]),1,f);
            //fprintf(f,"%d",array[i]);
        else
            fwrite(&array[i],sizeof(array[i]),1,p);
            //fprintf(p,"%d",array[i]);
    }
    fclose(f);
    fclose(p);
    f = fopen("even.txt","r");
    p = fopen("odd.txt","r");
    for(i=0;i<num;i++)
    {

        if(array[i]%2==0)
        {
            fread(&array[i],sizeof(array[i]),1,f);
            printf("\neven %d",array[i]);
        }

        else
        {
            fread(&array[i],sizeof(array[i]),1,p);
            printf("\nodd %d",array[i]);
        }

    }
}
