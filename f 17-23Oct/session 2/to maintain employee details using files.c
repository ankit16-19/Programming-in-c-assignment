//to maintain employee details using files
#include<stdio.h>
#include<stdlib.h>
main()
{
    struct employee
    {
        char name[20];
        char id[10];
    }e;
    FILE *f;
    f = fopen("employee_details.txt","w");
    char another='Y';
    while(another=='y'||another=='Y')
    {
        printf("Enter employee name and id:\n");
        scanf("%s %s",&e.name,&e.id);
        fwrite(&e,sizeof(struct employee),1,f);
        printf("To add another employee's details hit 'y':\n");
        fflush(stdin);
        another = getche();
        printf("\n");
    }
    fclose(f);
    f = fopen("employee_details.txt","r");
    while(fread(&e,sizeof(struct employee),1,f)==1)
       printf("%s %s\n",e.name,e.id);
}
