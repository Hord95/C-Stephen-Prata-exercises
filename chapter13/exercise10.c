#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main(void)
{
    long pos;
    FILE *fp;
    char text[SIZE];
    char filename[SIZE];
    printf("Введите название файла\n");
    scanf("%s",filename);
    fp=fopen(filename,"rb");
    while ((scanf("%ld",&pos))==1 && pos>=0)
    {
        fseek(fp,pos,SEEK_SET);
        fgets(text,SIZE,fp);
        fputs(text,stdout);
    }
    return 0;
}