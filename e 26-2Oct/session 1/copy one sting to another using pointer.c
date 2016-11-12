//copy one string to another using pointer
#include<stdio.h>
main()
{
    printf("Enter first string:\n");
    char st[100],nst[100];
    gets(st);
    char *ptr;
    ptr=st;
    int i=0;
    while(*ptr!='\0')
    {
        nst[i]=*ptr;
        i++;
        ptr++;
    }
    nst[i]='\0';
    printf("New copy of the entered sting is:\n");
    puts(nst);


}
