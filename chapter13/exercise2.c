#include <stdio.h>
#include <stdlib.h>
int main(int argc,char * argv[])
{
    FILE * fp1;
    FILE * fp2;
    int ch;
    if (argc !=3)
        exit(EXIT_FAILURE);
    if ((fp1=fopen(argv[1],"rb"))==NULL)
        exit(EXIT_FAILURE);
    fp2=fopen(argv[2],"wb");
    while ((ch=getc(fp1))!=EOF)
    {
        putc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}