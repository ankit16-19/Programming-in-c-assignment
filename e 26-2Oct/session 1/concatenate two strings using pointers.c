//concatenate two strings using pointers
#include<stdio.h>
main()
{
    printf("Enter first string:\n");
    char st1[100];
    gets(st1);
    printf("Enter second string:\n");
    char st2[100];
    gets(st2);
    char *ptr1,*ptr2;
    ptr1=st1;
    ptr2=st2;
    char st3[200];
    int i=0;
    while(*ptr1!='\0')
    {
        st3[i]=*ptr1;
        ptr1++;
        i++;
    }
    while(*ptr2!='\0')
    {
        st3[i]=*ptr2;
        ptr2++;
        i++;
    }
    st3[i]='\0';
    printf("\nconcatenated string is:\n");
    puts(st3);


}
