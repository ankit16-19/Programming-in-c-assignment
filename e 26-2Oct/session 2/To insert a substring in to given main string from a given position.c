//To insert a substring in to given main string from a given position.
#include<stdio.h>
#include<string.h>
main()
{
    printf("Enter a string:\n");
    char st[100];
    gets(st);
    printf("Enter a sub string to append to main string:\n");
    char sbst[100];
    gets(sbst);
    printf("Enter the position(after which) to start sub string adding:\n");
    int position;
    scanf("%d",&position);
    char *pt1=st,*pt2=sbst;
    int i,len1=strlen(st),len2=strlen(sbst);
    char stn[200];
    for(i=0;i<position;i++,pt1++)
        stn[i]=*pt1;
    int j=i,k;
    while(*pt2!='\0')
    {
            stn[j]=*pt2;
            j++;
            pt2++;
    }
    for(k=j;k<=j+len1-position;k++,pt1++)
        stn[k]=*pt1;
    stn[k]='\0';
    puts(stn);



}
