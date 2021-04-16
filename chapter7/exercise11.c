#include <stdio.h>

int main(void)
{
    char ch;
    float artichokes=2.05;
    int count_artichokes;
    int count_beet;
    int count_carrot;
    int count_artichokes_end=0;
    int count_beet_end=0;
    int count_carrot_end=0;
    float beet=1.15;
    float carrot=1.09;
    char answer;
    float amount=0;
    float amount_artichokes=0;
    float amount_beet=0;
    float amount_carrot=0;
    int count;
    float delivery;
    while ((ch=getchar())!='q')
    {
        switch (ch)
        {
        case 'a':
            printf("Введите вес артишоков ");
            scanf("%d",&count_artichokes);
            count_artichokes_end+=count_artichokes;
            amount_artichokes+=count_artichokes*artichokes;
            break;
        case 'b':
            printf("Введите вес свеклы ");
            scanf("%d",&count_beet);
            count_beet_end+=count_beet;
            amount_beet=count_beet*beet;
            break;
        case 'c':
            printf("Введите вес моркови ");
            scanf("%d",&count_carrot);
            count_carrot_end+=count_carrot;
            amount_carrot=count_carrot*carrot;
            break;
        }
        amount=amount_artichokes+amount_beet+amount_carrot;
        count=count_carrot_end+count_beet_end+count_artichokes_end;
    }
        if (amount>100)
        {
            amount=amount*0.95;
        }
        if (count<=5)
        {
            delivery=6.5;
            
        } else if (count >5 && count<=20)
        {
            delivery=14;
            
        } else{
            delivery=14+(count-20)*0.5;
        }
        amount=amount+delivery;
        if (amount>100){
        printf("стоимость фунта артишоков =%.2f \n"
            "стоимость фунта свеклы = %.2f\n"
            "стоимость фунта моркови = %.2f\n"
            "количество заказанных фунтов = %d\n"
            "стоимость артишоков = %.2f\n"
            "стоимость свеклы = %.2f\n"
            "стоимость моркови = %.2f\n"
            "скидка = 5%%\n"
            "затраты на доставку = %.2f\n"
            "итоговая сумма =%.2f \n",
            artichokes,beet,carrot,count,amount_artichokes,amount_beet,amount_carrot,delivery,amount);
        } else {
            printf("стоимость фунта артишоков =%.2f \n"
            "стоимость фунта свеклы = %.2f\n"
            "стоимость фунта моркови = %.2f\n"
            "количество заказанных фунтов = %d\n"
            "стоимость артишоков = %.2f\n"
            "стоимость свеклы = %.2f\n"
            "стоимость моркови = %.2f\n"
            "затраты на доставку = %.2f\n"
            "итоговая сумма =%.2f \n",
            artichokes,beet,carrot,count,amount_artichokes,amount_beet,amount_carrot,delivery,amount);
        }
    
        return 0;
    }
    

