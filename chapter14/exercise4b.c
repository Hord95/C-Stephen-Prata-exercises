#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 20
struct fio
    {
        char firstname[SIZE];
        char secondname[SIZE];
        char lastname[SIZE];
    };
struct insurance
{
    int snils;
    struct fio human;
    
};
char * s_gets(char * st,int n);
int int_gets(int * num);
void show(struct insurance res);

int main(void)
{
    struct insurance person[5];
    int i=0;
    int * num;
    while(i<5)
    {
        
        num=&person[i].snils;
        printf("Введите снилс: ");
        int_gets(num);
        printf("Введите ФИО: ");
        s_gets(person[i].human.lastname,SIZE);
        s_gets(person[i].human.firstname,SIZE);    
        s_gets(person[i].human.secondname,SIZE);
        
        ++i;
    }
    i=0;
    while(i<5)
        {
            show (person[i]);
            i++;
        }

}
char * s_gets(char * st,int n)
{
    char * ret_val;
    char * find;
    ret_val=fgets(st,n,stdin);
    if (ret_val)
        {
            find=strchr(ret_val,'\n');
            if(find)
            {
                *find='\0';
            }
            else
                while(getchar()!='\n')
                    continue;
        }
}
int int_gets(int * num)
{
    char strint[SIZE];
    fgets(strint,SIZE,stdin);
    *num=atoi(strint);    
}
void show(struct insurance res)
{
        if(res.human.secondname[0]=='\0')
            printf("%s, %s -- %d\n",res.human.lastname,res.human.firstname,res.snils);
        else
            printf("%s, %s %c. -- %d\n",res.human.lastname,res.human.firstname,res.human.secondname[0],res.snils);
}   