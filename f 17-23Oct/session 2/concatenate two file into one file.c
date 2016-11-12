//concatenate two file into one file
#include<stdio.h>
#include<string.h>
main()
{
    FILE *f,*p,*o;
    f = fopen("file1.txt","r");
    p = fopen("file2.txt","r");
    o = fopen("concatenated file.txt","w");
    while(1)
    {
        char c = fgetc(f);
        if(c==EOF)
            break;
        else
            fputc(c,o);
    }
    fclose(o);
    o = fopen("concatenated file.txt","a");
    while(1)
    {
        char c = fgetc(p);
        if(c==EOF)
            break;
        else
            fputc(c,o);
    }
    printf("Finished");

}
