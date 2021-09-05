#include <stdio.h>
#include <stdlib.h>

int main(int argc,char * argv[])
{
    int ch;
    FILE * fp;
    for (int i=1;i<argc;i++)
    {
        fp=fopen(argv[i],"r");
        while ((ch=getc(fp))!=EOF)
        {
            putc(ch,stdout);
        }
        fclose(fp);
    }
    return 0;
}