#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARSIZE 1000

int main(int argc,char * argv[])
{
    double numbers[ARSIZE];
    double value;
    const char * file="numbers.dat";
    int i;
    int num=atoi(argv[1]);
    long pos;
    FILE * iofile;
   
    for (i=0;i<ARSIZE;i++)
        numbers[i]=100.0*i+1.0/(i+1);
    if ((iofile=fopen(file,"w"))==NULL)
        exit(EXIT_FAILURE);
    fwrite(numbers,sizeof(double),ARSIZE,iofile);
    fclose(iofile);
    if (argc!=2)
        exit(EXIT_FAILURE);
    if ((iofile=fopen(file,"rb"))==NULL)
        {
            fprintf(stderr,"Не удается открыть файл \n");
            exit(EXIT_FAILURE);
        }
    if (num<0 || num>999)
        {
            fprintf(stderr,"Введите индекс от 0 до 999");
            exit(EXIT_FAILURE);
        }
    pos=(long) num*sizeof(double);
    fseek(iofile,pos,SEEK_SET);
    fread(&value,sizeof(double),1,iofile);
    printf("По этому индексу находится значение %f\n",value);
    fclose(iofile);
    return 0;
}