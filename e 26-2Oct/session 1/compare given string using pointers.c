//compare given string using pointer
#include<stdio.h>
#include<string.h>
main()
{
    printf("Enter first string:\n");
    char st1[100];
    gets(st1);
    printf("Enter second string to compare with the first string:\n");
    char st2[100];
    gets(st2);
    char *pt1,*pt2;
    pt1=st1;
    pt2=st2;
    int len1=strlen(st1),len2=strlen(st2);
    int small = (len1<len2)?len1:len2;
    int i,count=0;
    for(i=0;i<small;i++,pt1++,pt2++)
    {
        if(*pt1==*pt2)
            count++;
    }
    if(count==small)
        printf("Yes,same string");
    else
        printf("No,different strings");
}
