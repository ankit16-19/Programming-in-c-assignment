//program to mere the content of two files
#include<stdio.h>
main()
{
    FILE *mrg,*a,*b;
    char c;
    mrg = fopen("merged.txt","w");
    a = fopen("test.text","r");
    while(1)
    {
      c = fgetc(a);
      if( feof(a) )
         break ;
      putc(c,mrg);

    }
    fclose(mrg);
    fclose(a);
    mrg=fopen("merged.txt","a");
    b=fopen("structured student details.txt","r");
        while(1)
    {
      c = fgetc(b);
      if( feof(b) )
         break ;
      putc(c,mrg);

    }
    fclose(mrg);
    fclose(b);

}
