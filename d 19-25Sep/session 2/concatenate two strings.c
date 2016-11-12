//concatenate two strings
#include<stdio.h>
#include<string.h>
main()
{
    char st1[100],st2[100],st[200];
    printf("Enter first string:\n");
    gets(st1);
    printf("Enter second string:\n");
    gets(st2);
    int x,y;
    x = strlen(st1);
    y = strlen(st2);
    int i;
    for(i=0;i<x;i++)
        st[i]=st1[i];
    int j;
    for(j=x,i=0;j<x+y;j++,i++)
            st[j]=st2[i];
    st[j]='\0';
    printf("%s",st);
}
