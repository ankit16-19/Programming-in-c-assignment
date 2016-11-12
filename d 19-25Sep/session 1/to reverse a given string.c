//to reverse a given string
#include<stdio.h>
#include<string.h>
main()
{
    char s1[100],s2[100];
    gets(s1);
    int len=strlen(s1),i,j;
    for(i=0,j=(len-1);i<len;i++,j--)
    {
        s2[i]=s1[j];
        printf("%c",s2[i]);
    }

}
