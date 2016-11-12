//to check if a string is palindrome
#include<stdio.h>
#include<string.h>
main()
{
    char st[100];
    gets(st);
    int len = strlen(st);
    int i,j,count=0;
    for(i=0,j=len-1;i<=len/2;i++,j--)
    {
        if(st[i]==st[j])
            count++;
    }
    if(count>=len/2)
        printf("String is palindrome");
    else
        printf("Not palindrome");

}
