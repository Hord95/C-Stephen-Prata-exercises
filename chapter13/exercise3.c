#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 50

int main(void)
{
    FILE * fp1;
    FILE * fp2;
    int ch;
    char  name1[SIZE];
    char  name2[SIZE];
    printf("Введите название исходного файла \n");
    scanf("%s",&name1);
    printf("Введите название выходного файла\n");
    scanf("%s",name2);
    fp1=fopen(name1,"r");
    fp2=fopen(name2,"w");
    while ((ch=getc(fp1))!=EOF)
    {
        putc(toupper(ch),fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}