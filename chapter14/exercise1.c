#include <stdio.h>
#include <string.h>

struct months
{
    char name[20];
    char abv[7];
    int count;
    int number;
};
struct months month[12]=
    {
        {"январь", "янв",31,1},
        {"февраль", "фев",28,2},
        {"март", "мар",31,3},
        {"апрель", "апр",30,4},
        {"май", "май",31,5},  
        {"июнь", "июн",30,6},  
        {"июль", "июл",31,7},  
        {"август", "авг",31,8},
        {"сентябрь", "сен",30,9},    
        {"октябрь", "окт",31,10},  
        {"ноябрь", "ноя",30,11},  
        {"декабрь", "дек",31,12}  
    };
    
int days(char * day);

int main(void)
{
    char * ch;
    int i=0;
    char name_month[12];
    scanf("%s",name_month);
    printf("%d\n",days(name_month));
    return 0;
}
int days(char * day) 
{
    
    int sum=0;
    for (int i=0;i<12;i++)
        {
            if (strcmp(day,month[i].name)==0)
            {
                sum+=month[i].count;
                return sum;
            }
            else
            {
                sum+=month[i].count;    
            }
        }
}
