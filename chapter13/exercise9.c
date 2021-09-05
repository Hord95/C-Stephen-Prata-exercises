#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void)
{
    FILE *fp;
    char words[MAX];
    int count=0;
    if ((fp=fopen("wordy","a+"))==NULL)
        {
            fprintf(stdout,"Не удается открыть файл\"wordy\".\n");
            exit(EXIT_FAILURE);
        }
    while((fscanf(fp,"%d %s",&count,words))!=EOF)
    ;    
    puts("Введите слова для добавления в файл; для завершения");
    puts("Введите символ # в начале строки");
    while ((fscanf(stdin,"%40s",words)==1) && (words[0]!='#'))
    {
        ++count;
        fprintf(fp,"%d %s\n",count,words);
    }
    puts("Содержание файла:");
    rewind(fp);
    while ((fgets(words,MAX,fp))!=NULL)
    {
        fputs(words,stdout);
    }
    puts("Готово");
    if (fclose(fp)!=0)
        fprintf(stderr,"Ошибка при закрытии файла");
    return 0;
}