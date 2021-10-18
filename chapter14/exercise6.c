#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define FULLSIZE 100
#define SIZE 20
#define COUNT 19
int main(void)
{
    char string[FULLSIZE];
    int index;
    int catches; //количество принимаемых ударов
    int hits;
    int arcatches[COUNT];
    int arhits[COUNT];
    int temppass;
    int temprun;
    char templastname[SIZE];
    char tempfirstname[SIZE];
    struct list 
    {
        char lastname[SIZE];
        char firstname[SIZE];
        int scores;
        int pass; //пробежка
        int run;  //засчитанные пробежки
        float avgresult;
    };
    struct list players[COUNT];
    for (int i=0;i<COUNT;i++)
    {
        (players+i)->lastname[0]='\0';
        players[i].pass=0;
        players[i].run=0;
        players[i].scores=0;
        arcatches[i]=0;
        arhits[i]=0;
    }
    FILE * fp;
    fp=fopen("list","r");
    while((fscanf(fp,"%d %s %s %d %d %d %d",&index,templastname,tempfirstname,&catches,&hits,&temppass,&temprun))!=EOF)
        {
        strncpy((players+index)->lastname,templastname,SIZE);
        strncpy((players+index)->firstname,tempfirstname,SIZE);
        players[index].pass+=temppass;
        players[index].run+=temprun;
        arcatches[index]+=catches;
        arhits[index]+=hits;          
        }
    for (int i=0;i<COUNT;i++)
    {
        players[i].scores=arhits[i];
        players[i].avgresult=(float)arhits[i]/(float)arcatches[i];
    }
    for (int i=0;i<COUNT;i++)
    {
        if ((strlen((players+i)->lastname))>0)
            printf("%s %s %d %d %d %.3f\n",(players+i)->lastname,(players+i)->firstname,(players+i)->scores,(players+i)->pass,(players+i)->run,(players+i)->avgresult);
    }
}

    
 
