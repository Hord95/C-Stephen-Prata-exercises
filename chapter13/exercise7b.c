#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int main(int argc,char *argv[])
{
    char *let;
    char ch1[SIZE];
    char ch2[SIZE];
    FILE *file1,*file2;
    char fp1[SIZE];
    char fp2[SIZE];
    if (argc!=3)
    {
        printf("Введите названия 2 файлов\n");
        scanf("%s %s",fp1,fp2);
    }
    else
    {
        strncpy(fp1,argv[1],SIZE);
        strncpy(fp2,argv[2],SIZE);
    }
    file1=fopen(fp1,"r");
    file2=fopen(fp2,"r");
    while ((fgets(ch1,SIZE,file1))!=NULL && (fgets(ch2,SIZE,file2))!=NULL)
    {
        if ((let=strchr(ch1,'\n'))!=NULL)
            *let=' ';
        strncat(ch1,ch2,SIZE);
        fputs(ch1,stdout);
    }
    while ((fgets(ch1,SIZE,file1))!=NULL)
    {
        fputs(ch1,stdout);
    }
    while ((fgets(ch2,SIZE,file2))!=NULL)
    {
        fputs(ch2,stdout);
    }
    return 0;
}