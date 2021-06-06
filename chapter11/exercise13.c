#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100
int main(int argc,char * argv[])
{
    char text[1000];
    for (int i=argc-1;i>=0;i--)
    {
        for (int j=0;j<=strlen(argv[i]);j++)
        {
        if (argv[i][j]=='\0')
            printf(" ");
        else    
            printf("%c",argv[i][j]);
        }
    }
}
