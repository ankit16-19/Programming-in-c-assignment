//length of the string using pointer
#include<stdio.h>
main()
{
    printf("Enter a string:\n");
    char st[100];
    gets(st);
    char *ptr;
    ptr=st;
    int count=0;
    while(*ptr!='\0')
    {
        ptr++;
        count++;
    }
    printf("The length of the entered string is:\n %d",count);
}

