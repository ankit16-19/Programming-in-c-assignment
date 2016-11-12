//To delete n Characters from a given position in a given string.
#include<stdio.h>
#include<string.h>
main()
{
    printf("Enter a string:\n");
    char st[100];
    gets(st);
    printf("Enter a number to delete that much elements from the string:\n");
    int n;
    scanf("%d",&n);
    printf("Enter the position(after which) to delete %d elements of the string:\n",n);
    int position;
    scanf("%d",&position);
    char *pt1=st;
    int i,len=strlen(st);
    char stn[150];
    for(i=0;i<position;i++,pt1++)
        stn[i]=*pt1;
    int j,k;
    for(j=i,*pt1=*(pt1+n);j<len-n;j++,pt1++)
        stn[j]=*pt1;
    stn[j]='\0';
    puts(stn);


}
