//Program to maintain student details using structures
#include<stdio.h>
main()
{
    struct student
    {
        char id[10];
        char name[20];
        char branch[10];

    }details;
    printf("Enter details of student:\n");
    printf("Enter ID of the student:\n");
    gets(details.id);
    printf("Enter Name of the student:\n");
    gets(details.name);
    printf("Enter the branch of the student:\n");
    gets(details.branch);
    printf("Student details are:\n");
    printf("ID: ");
    puts(details.id);
    printf("Name: ");
    puts(details.name);
    printf("Branch: ");
    puts(details.branch);

}
