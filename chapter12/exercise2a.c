#include <stdio.h>
static int prev_mode;
static float fuel;
static float distance;
void set_mode(int mode)
{
    if (mode==0 )
    {
        prev_mode=0;
    } else if (mode==1)
    {
        prev_mode=1;
    }
    else 
    {
        printf("Указан недопустимый режим.Используется режим %d\n",prev_mode);
    }
}

void get_info(void)
{
    float number;
    if (prev_mode==0)
    {
        printf("Введите пройденное растояние в киллометрах: ");
        scanf("%f",&number);
        distance=number;
        printf("Введите объем израсходованного топлива в литрах ");
        scanf("%f",&number);
        fuel=number;
    } 
    else if (prev_mode==1)
    {
        printf("Введите пройденное растояние в миллях: ");
        scanf("%f",&number);
        distance=number;
        printf("Введите объем израсходованного топлива в галлонах ");
        scanf("%f",&number);
        fuel=number;
    }
}
void show_info(void)
{
    if (prev_mode==0)
    {
        printf("Расход топлива на составляет %.2f на 100 км \n",fuel/distance*100);
    } else if (prev_mode==1)
    {
        printf("Расход топливав составляет %.2f мили на галлон\n",distance/fuel);
    }
}

