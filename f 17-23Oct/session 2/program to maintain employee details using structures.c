//program to maintain employee details using structures
#include<stdio.h>
main()
{
    struct employee
    {
        char name[20];
        char id[10];
        int experience;
    }e;
    char answer='y';
    FILE *f;
    f=fopen("employee details.txt","w");
    while(answer=='y'||answer=='Y')
    {
        printf("Enter the details of employee name id experience:\n");
        gets(e.name);
        gets(e.id);
        scanf("%d",&e.experience);
        fprintf(f,"%s || %s || %d\n",e.name,e.id,e.experience);
        printf("To enter another employees details(Hit 'y' or 'Y')");
        fflush(stdin);
        scanf("%c",&answer);
        fflush(stdin);
    }
}
