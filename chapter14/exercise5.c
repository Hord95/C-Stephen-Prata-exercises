#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20
#define COUNTGRD 3
#define cSIZE 4
struct name 
{
    char lastname[SIZE];
    char firstname[SIZE];
};
struct student
{
    struct name fio;
    float grade[COUNTGRD];
    float avggrade;
};
int entr_grades (struct student * learner);
float avg_grades(struct student * learner);
void show(struct student * learner);
void showavg(struct student * learner);
char s_gets(char * string);
float float_gets(float * num);

int main(void)
{
    struct student group[cSIZE]=
    {
        {"Ivanov","Ivan"},
        {"Petrov","Petr"},
        {"Alexandrov","Alex"},
        {"Smirnova","Irina"}
    };
    entr_grades(group);
    avg_grades(group);
    show(group);
    showavg(group);
}
int entr_grades (struct student * learner)
{
    char firstname[SIZE];
    char lastname[SIZE];
    char name[SIZE];
    printf("Enter last name and first name of student and his(her) grades\n");
    int count=0;
    printf("List of Students: \n1)%s %s\n2)%s %s\n3)%s %s\n4)%s %s\n",learner->fio.lastname,learner->fio.firstname,
    (learner+1)->fio.lastname,(learner+1)->fio.firstname,(learner+2)->fio.lastname,(learner+2)->fio.firstname,(learner+3)->fio.lastname,(learner+3)->fio.firstname);
    while(count<cSIZE)
    {
        printf("Введите фамилию: ");
        s_gets(lastname);
        printf("Введите имя: ");
        s_gets(firstname);
        for (int x=0;x<cSIZE;x++)
        {        
        if (((strncmp(lastname,(learner+x)->fio.lastname,7))==0) && ((strncmp(firstname,(learner+x)->fio.firstname,7))==0)) //проверка на наличие такого ученика
            {
                printf("Введите 3 оценки\n");
                for (int i=0;i<3;i++)
                float_gets(&(learner[x].grade[i]));
                
                
                ++count;
            }
        else
            continue;
        }
    }
}
float avg_grades(struct student * learner) //  вычисление средней арифметической оценки
{
    float sum=0;
    float grade;
    for (int i=0;i<cSIZE;i++)
    {
        for (int j=0;j<3;j++)
        {   
            grade=(learner+i)->grade[j];
            sum+=grade;                         
            if (j==2)
            {
                (learner+i)->avggrade=sum/3;
            }
        }
    }
}
void show (struct student * learner)
{
    for (int i=0;i<cSIZE;i++)
    {
        printf("Студент %s %s",(learner+i)->fio.lastname,(learner+i)->fio.firstname);
        printf(" имеет оценки: %f %f %f",(learner+i)->grade[0],(learner+i)->grade[1],(learner+i)->grade[2]);
        printf(" средняя оценка: %f\n",(learner+i)->avggrade);
    }
}
char s_gets(char * string)
{
    char * find1;
    fgets(string,SIZE,stdin);
    find1=strchr(string,'\n');
    if (find1)
    {
        *find1='\0';
    }
    else
        while(getchar()=='\n')
            continue;
}
float float_gets(float * num)
{
    char string[SIZE];
    fgets(string,SIZE,stdin);
    *num=atof(string);
}
void showavg(struct student * learner)
{
    float sum;
    float avg;
    for (int i=0;i<3;i++)
    {
        sum=0;
        for (int j=0;j<cSIZE;j++)
        {
            sum+=(learner+j)->grade[i];
        }
    printf("Средняя оценка за %d курс = %f\n",i+1,sum/4);
    }
}