#include <stdio.h>
struct months
{
    char name[20];
    char abv[7];
    int count;
    int number;
};
int main(void)
{
    int day;
    int year;
    int month;
    int sum=0;
   struct months leapyear[12]=
    {
        {"январь", "янв",31,1},
        {"февраль", "фев",29,2},
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
   struct months noleapyear[12]=
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
    printf("Enter day: ");
    scanf("%d",&day);
    printf("Enter month(number): ");
    scanf("%d",&month);
    printf("Enter year: ");
    scanf("%d",&year);
    if (year%4==0 || ( year%100==0 & year%400==0))
        {
            if(day<1 || day>leapyear[month-1].count)
                {
                    fprintf(stderr,"Error",stdout);
                    return -1;
                }
            for (int i=0;i<12;i++)
            {
                if (month==leapyear[i].number)
                {
                    sum+=day;
                    printf("%d\n",sum);
                }
                else
                {
                    sum+=leapyear[i].count;
                }
            }
        }
    else
    {
        if(day<1 || day>noleapyear[month-1].count)
               { 
                   fprintf(stderr,"Error",stdout);
                   return -1;
               }
        for (int i=0;i<12;i++)
            {
                if (month==noleapyear[i].number)
                {
                    sum+=day;
                    printf("%d\n",sum);
                }
                else
                {
                    sum+=noleapyear[i].count;
                }
            }
    }
    return 0;
}