#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 12
#define FIOSIZE 20
struct seat
{
    int number;
    int free;
    char lastname[FIOSIZE];
    char firstname[FIOSIZE];
};

int main(void)
{
    int numseat;
    struct seat temp[SIZE];
    struct seat tempshow;
    char ch;
    struct seat airplane[SIZE];
    FILE * fp;
    int count=0;
    int countfree=0;
    fp=fopen("list_new","r+b");
    if (fp==NULL) 
    {
        fputs("Error",stderr);
        exit(1);
    }
    for (int i=0;i<SIZE;i++)
    {
        (airplane+i)->free=0;
    }
    while(count<SIZE && fread(&airplane[count],sizeof(struct seat),1,fp)==1)
    {
        if ( airplane[count].free==1)
            printf("место %d забронировано %s %s\n",airplane[count].number,airplane[count].lastname,airplane[count].firstname);
        count++;
    }
    rewind(fp);
    printf("a) Показать количество свободных мест\nb) Показать список свободных мест\n");
    printf("c) Показать список забронированных мест в алфавитном порядке\nd) Забронировать место для пассажира\n");
    printf("e) Снять броню с места\nf) Выйти из программы\n");
    while((ch=getchar())!='\n' && (ch>='a' && ch<='f'))
    {
        if(ch=='a')
        {
            for (int i=0;i<SIZE;i++)
            {
                if ((airplane+i)->free==0)
                    countfree+=1;
            }
            printf("количество свободных мест - %d\n",countfree);
            printf("a) Показать количество свободных мест\nb) Показать список свободных мест\n");
            printf("c) Показать список забронированных мест в алфавитном порядке\nd) Забронировать место для пассажира\n");
            printf("e) Снять броню с места\nf) Выйти из программы\n");
            countfree=0;
            ch=getchar();                       
        }
        else if (ch=='b')
        {
            for (int i=0;i<SIZE;i++)
            {
                if ((airplane+i)->free==0)
                    printf("Место №%d свободно\n",i+1);
            }
            
            printf("a) Показать количество свободных мест\nb) Показать список свободных мест\n");
            printf("c) Показать список забронированных мест в алфавитном порядке\nd) Забронировать место для пассажира\n");
            printf("e) Снять броню с места\nf) Выйти из программы\n");
            ch=getchar();
                                   
        }
        else if (ch=='c')
        {
            int count=0;
            for (int i=0;i<SIZE;i++)
            {
                if (airplane[i].free==1)
                    {
                        temp[count]=airplane[i];
                        ++count;
                    }
            }
            for (int i=0;i<count-1;i++) 
            {
                for (int j=0;j<count-1;j++)  
                                                
                {
                    
                    if ((strncmp(temp[j].lastname,temp[j+1].lastname,FIOSIZE))==0)
                    {
                        if ((strncmp(temp[j].firstname,temp[j+1].firstname,FIOSIZE))>0)
                        {
                            tempshow=temp[j];
                            temp[j]=temp[j+1];    
                            temp[j+1]=tempshow;                    
                        }
                    }
                    else if ((strncmp(temp[j].lastname,temp[j+1].lastname,FIOSIZE))>0)
                        {
                           tempshow=temp[j];
                            temp[j]=temp[j+1];    
                            temp[j+1]=tempshow;  
                        }
                }
            }
            for (int i=0;i<count;i++)
            {
                printf("место %d забронировано %s %s\n",temp[i].number,temp[i].lastname,temp[i].firstname);
            }
            printf("a) Показать количество свободных мест\nb) Показать список свободных мест\n");
            printf("c) Показать список забронированных мест в алфавитном порядке\nd) Забронировать место для пассажира\n");
            printf("e) Снять броню с места\nf) Выйти из программы\n");
            ch=getchar();
        }
        else if (ch=='d')
        {
            printf("Введите номер места от 1 до 12:");
            scanf("%d",&numseat);
            if (numseat>=1 && numseat<=12)
            {
                if (airplane[numseat-1].free==1)
                    {
                        printf("Забронировано\n");
                        printf("a) Показать количество свободных мест\nb) Показать список свободных мест\n");
                        printf("c) Показать список забронированных мест в алфавитном порядке\nd) Забронировать место для пассажира\n");
                        printf("e) Снять броню с места\nf) Выйти из программы\n");
                        ch=getchar();
                    }
                else
                {
                    printf("Введиие Фамилию и имя\n");
                    scanf("%s %s",airplane[numseat-1].lastname,airplane[numseat-1].firstname);
                    airplane[numseat-1].free=1;
                    airplane[numseat-1].number=numseat;
                    printf("a) Показать количество свободных мест\nb) Показать список свободных мест\n");
                    printf("c) Показать список забронированных мест в алфавитном порядке\nd) Забронировать место для пассажира\n");
                    printf("e) Снять броню с места\nf) Выйти из программы\n");
                    ch=getchar();
                }
            }
        }
        else if (ch=='e')
        {
            printf("Введите номер места от 1 до 12:");
            scanf("%d",&numseat);
            if (numseat>=1 && numseat<=12)
            {
                if (airplane[numseat-1].free==1)
                    {
                        char familia[FIOSIZE];
                        char imya[FIOSIZE];
                        printf("Введите фамилию и имя\n");
                        scanf("%s %s",familia,imya);
                        if ((strncmp(familia,airplane[numseat-1].lastname,FIOSIZE)==0) && (strncmp(imya,airplane[numseat-1].firstname,FIOSIZE)==0))
                        {
                            printf("Бронь снята\n");
                            for (int i=0;i<strlen(airplane[numseat-1].lastname)-1;i++)
                                airplane[numseat-1].lastname[i]=0;
                            for (int i=0;i<strlen(airplane[numseat-1].firstname)-1;i++)
                                airplane[numseat-1].firstname[i]=0;
                            airplane[numseat-1].free=0;
                        }
                    printf("a) Показать количество свободных мест\nb) Показать список свободных мест\n");
                    printf("c) Показать список забронированных мест в алфавитном порядке\nd) Забронировать место для пассажира\n");
                    printf("e) Снять броню с места\nf) Выйти из программы\n");
                    ch=getchar();
                        
                    }
                else
                {
                    printf("Место свободно\n");
                    printf("a) Показать количество свободных мест\nb) Показать список свободных мест\n");
                    printf("c) Показать список забронированных мест в алфавитном порядке\nd) Забронировать место для пассажира\n");
                    printf("e) Снять броню с места\nf) Выйти из программы\n");
                    ch=getchar();
                }
            }
        }
        else if (ch=='f')
        {
            rewind(fp);
            for (int i=0;i<12;i++)
            {
                fwrite(&airplane[i],sizeof(struct seat),1,fp);
            }
            break;
        }
    }
}
