//read a sequence of data stream and count odd digits
#include<stdio.h>
#include<string.h>
main()
{
    FILE *f;
    f = fopen("input data stream.txt","r");
    int one=0,three=0,five=0,seven=0;
    char c;
    while(1)
    {
        char c = fgetc(f);
        if(c==EOF)
            break;
        else
        {
            if(c=='1')
                one++;
            if(c=='3')
                three++;
            if(c=='5')
                five++;
            if(c=='7')
                seven++;
        }
    }
    printf("odd digit count in input data file:\none = %d\nthree = %d\nfive = %d\nseven = %d",one,three,five,seven);

}
