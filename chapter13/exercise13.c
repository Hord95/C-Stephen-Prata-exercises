#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int row=20;
    int column=30;
    int columnstring=31;
    int size = 20;
    char ch;
    int picture[row][column];
    char symbols[row][columnstring];
    char filename[size];
    FILE *fp;
    FILE *fpend;
    printf("Введите название файла\n");
    scanf("%s",filename);
    fp=fopen(filename,"r");
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column*2;j++)
            {
                ch=fgetc(fp);
                if (isdigit(ch))
                {
                    picture[i][j/2]=ch-48;
                    if (j==0)
                        picture[i][j]=ch-48;
                }
            }
    }
    fclose(fp);
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<columnstring;j++)
        {
            if (j==30)
            {
                symbols[i][j]='\0';
            }
            else
            {
                if (picture[i][j]==0)
                {
                    symbols[i][j]=' ';
                }
            else if (picture[i][j]==1)
                {
                    symbols[i][j]='.';
                }
            else if (picture[i][j]==2)
                {
                    symbols[i][j]='\'';
                }
            else if (picture[i][j]==3)
                {
                    symbols[i][j]=':';
                }
            else if (picture[i][j]==4)
                {
                    symbols[i][j]='~';
                }
            else if (picture[i][j]==5)
                {
                    symbols[i][j]='*';
                }
            else if (picture[i][j]==6)
                {
                    symbols[i][j]='=';
                }
            else if (picture[i][j]==7)
                {
                    symbols[i][j]='&';
                }
            else if (picture[i][j]==8)
                {
                    symbols[i][j]='\%';
                }
            else if (picture[i][j]==9)
                {
                    symbols[i][j]='#';
                }
            }
        }
    }
    printf("Введите название файла для вывода данных\n");
    scanf("%s",filename);
    fpend=fopen(filename,"wb");
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<columnstring;j++)
        {
            printf("%c",symbols[i][j]);
        }
        printf("\n");
        fprintf(fpend,"%s\n",symbols[i]);
    }
    fclose(fpend);
    printf("\n");
}