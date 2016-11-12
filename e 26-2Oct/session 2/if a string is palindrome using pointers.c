//to find if a string is palindrome using pointer
#include<stdio.h>
#include<string.h>
main()
{
    printf("Enter a string to check if it is palindrome:\n");
    char st[100];
    gets(st);
    int len=strlen(st);
    char *pt=st;
    char *end=&st[len-1];
    int i,count=0;
    for(i=0;i<len/2;i++)
    {
        if(toupper(*(pt+i))==toupper(*(end-i)))
        {
            count++;
        }
        else
            break;
    }
        if(count==len/2)
        printf("Yes,Palindrome");
        else
        printf("NO");

}






