//fin length of the string
#include<stdio.h>
main()
{
    char string[100];
    gets(string);
    int i=0;
    while(string[i]!='\0')
    {
        i++;
    }
    printf("%d",i);

}
