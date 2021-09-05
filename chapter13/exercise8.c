#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
int main(int argc,char *argv[])
{
    FILE *fp;
    char symb;
    char filename[SIZE];
    int count;
    if (argc==2)
    {
        printf("Введите название файла\n");
        scanf("%s",filename);
         for (int i=0;i<1;i++)
        {
            count=0;
            fp=fopen(filename,"r");
            while((symb=getc(fp))!=EOF)
            {
                if (symb==argv[1][0])
                    count++;
            }
        fclose(fp);
        }
        printf("файл %s имеет кол-во символа \"%c\" = %d\n",filename,argv[1][0],count);
    }
    else if (argc <2)
    {
        fprintf(stderr,"Введите как минимум символ\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        for (int i=0;i<argc-2;i++)
        {
            count=0;
            fp=fopen(argv[2+i],"r");
            while((symb=getc(fp))!=EOF)
            {
                if (symb==argv[1][0])
                    count++;
            }
             printf("файл %s имеет кол-во символа \"%c\" = %d\n",argv[2+i],argv[1][0],count);
            fclose(fp);
        }
    }
    return 0;
}
    