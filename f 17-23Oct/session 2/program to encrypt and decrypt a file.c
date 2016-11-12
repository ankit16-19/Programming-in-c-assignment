//program to encrypt and decrypt a file
#include<stdio.h>
#include<string.h>
main()
{
    FILE *f;
    f = fopen("encrypted.txt","w");
    printf("Enter a text to encrypt(hit enter when completed):\n");
    char s[300];
    gets(s);
    int i;
    for(i=0;i<strlen(s);i++)
    {
        int z;
        z = s[i];
        z=z+3;
        fprintf(f,"%c",z);

    }
    fclose(f);
    FILE *p;
    p = fopen("decrypted.txt","w");
    f = fopen("encrypted.txt","r");
    while(1)
    {
        char a = fgetc(f);
        if(a==EOF)
                break;
        else
            a = a - 3;
        fputc(a,p);
    }
    fclose(p);
    fclose(f);
}
