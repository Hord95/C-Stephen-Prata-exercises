#include <stdio.h>
#include <string.h>
char * s_gets(char * st,int n);
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100

struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    int res;
    struct book library[MAXBKS];
    struct book temp;
    int count=0;
    int index;
    printf("Введите название книги\n");
    printf("Нажмите [enter]  в начале строки, чтобы закончить ввод.\n");
    while(count<MAXBKS && s_gets(library[count].title,MAXTITL)!=NULL && library[count].title[0]!='\0')
        {
            printf("Теперь введите ФИО автора\n");
            s_gets(library[count].author,MAXAUTL);
            printf("Теперь ведите цену.\n");
            scanf("%f",&library[count++].value);
            while(getchar()!='\n')
                continue;
            if (count< MAXBKS)
                printf("Введите название следующей книги.\n");
        }
        if (count>0)
        {
            printf("Каталог ваших книг:\n");
            for (index=0;index<count;index++)
                printf("%s авторства %s: %.2f\n",library[index].title,library[index].author,library[index].value);
            printf("Каталог ваших книг в алфавитном порядке.\n");
            for (index=0;index<count;index++)
            {
                for(int j=0;j<count-1;j++)
                    {
                        if ((res=strncmp(library[j].title,library[j+1].title,MAXTITL))>0)
                        {
                            temp=library[j+1];
                            library[j+1]=library[j];
                            library[j]=temp;
                        }
                    }
            }
            for (index=0;index<count;index++)
                printf("%s авторства %s: %.2f\n",library[index].title,library[index].author,library[index].value);
            printf("Каталог ваших книг в порядке возрастания цены.\n");
            for (index=0;index<count;index++)
            {
                for(int j=0;j<count-1;j++)
                    {
                        if (library[j].value>library[j+1].value)
                        {
                            temp=library[j+1];
                            library[j+1]=library[j];
                            library[j]=temp;
                        }
                    }
            }
             for (index=0;index<count;index++)
                printf("%s авторства %s: %.2f\n",library[index].title,library[index].author,library[index].value);
        }
        else
            printf("Вообще нет книг?Очень плохо.\n");
        return 0;
}
char * s_gets(char * st,int n)
{
    char * ret_val;
    char * find;
    ret_val=fgets(st,n,stdin);
    if (ret_val)
    {
        find=strchr(st,'\n');
        if(find)
            *find='\0';
        else
            while(getchar()!='\n')
                continue;
    }
}