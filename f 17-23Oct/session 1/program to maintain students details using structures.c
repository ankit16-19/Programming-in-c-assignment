//program to maintain students details using structures
#include<stdio.h>
main()
{
    struct student
    {
        char name[10];
        char id[10];
        char branch[10];
    }s;
    char ans='y';
    FILE *ssd;
    ssd=fopen("structured student details.txt","w+");
    while(ans=='Y'||ans=='y')
    {
        printf("Enter the details of the student name id branch:\n");
        gets(s.name);
        gets(s.id);
        gets(s.branch);

        fprintf(ssd,"%s || %s || %s\n",s.name,s.id,s.branch);
        printf("Want to enter another student details.(Hit 'y' or 'Y')");
        scanf("%c",&ans);
        fflush(stdin);
    }
    fclose(ssd);

}
