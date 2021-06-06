#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100

int main(int argc,char ** argv)
{
    FILE * f;
    f=fopen("test.txt","r");
    char text[SIZE];
    char * read;
    while(fgets(text,SIZE,f))
    {
        if (argv[1]==NULL)
            argv[1]="-p";
        if (strncmp(argv[1],"-p",SIZE)==0)
                fputs(text,stdout);
        else if(strncmp(argv[1],"-u",SIZE)==0)
            {
                for (int i=0;i<strlen(text)-1;i++)
                {
                    printf("%c",toupper(text[i]));
                }
                printf("\n");
            }
        else if (strncmp(argv[1],"-l",SIZE)==0)
            {
                for (int i=0;i<strlen(text)-1;i++)
                {
                    printf("%c",tolower(text[i]));
                }
                printf("\n");
            }
    }
}