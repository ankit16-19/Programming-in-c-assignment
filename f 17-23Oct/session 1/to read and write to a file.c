//to write data to a file
#include<stdio.h>
main()
{
    FILE *f;
    f = fopen("test.text","w");
    printf("Enter a string to enter to write to the file");
    char str[100];
    gets(str);
    fputs(str,f);
    fclose(f);
}
