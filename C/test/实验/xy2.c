#include<stdio.h>
void main()
{
    char a[7][19]={
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ','1',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ','2','2',' ','2','2',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ','3','3','3',' ',' ',' ',' ',' ','3','3','3',' ',' ',' ',' '},
                    {'4','4','4','4',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','4','4','4','4'},
                     {' ',' ',' ',' ','3','3','3',' ',' ',' ',' ',' ','3','3','3',' ',' ',' ',' '},
                     {' ',' ',' ',' ',' ',' ',' ','2','2',' ','2','2',' ',' ',' ',' ',' ',' ',' '},
                     {' ',' ',' ',' ',' ',' ',' ',' ',' ','1',' ',' ',' ',' ',' ',' ',' ',' ',' '}
                    };
    int i,j;
    for(i=0;i<7;i++)
    {
        for(j=0;j<19;j++)
            printf("%c",a[i][j]);
        printf("\n");
    }
}