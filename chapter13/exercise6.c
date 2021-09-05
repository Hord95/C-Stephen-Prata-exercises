#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 100
#define SIZE 20
int main(void)
{
    FILE *in,*out;
    char file[SIZE];
    int ch;
    char name[LEN];
    int count=0;
    printf("Введите название файла\n");
    scanf("%s",file);
    if ((in=fopen(file,"r"))==NULL)
    {
        fprintf(stderr,"не удается открыть файл\n");
        exit(EXIT_FAILURE);
    }
    strncpy(name,file,LEN-5);
    name[LEN-5]='\0';
    strcat(name,".red");
    if ((out=fopen(name,"w"))==NULL)
    {
        fprintf(stderr,"не удается создать файл\n");
        exit(3);
    }
    while ((ch=getc(in))!=EOF)
    {
        if (count++%3==0)
            putc(ch,out);
    }
    if (fclose(in)!=0 || fclose(out)!=0)
    fprintf(stderr,"ошибка при закрытии файла\n");    
}