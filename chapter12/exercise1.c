#include <stdio.h>
void critic(int untis);
int main(void)
{
    int units;
    printf("Сколько фунтов весит маленький бочонок масла?\n");
    scanf("%d",&units);
    while (units !=56)
    {
        critic(units);
        scanf("%d",&units);
    }
    printf("Вы знали это\n");
    return 0;
}
void critic(int units)
{
    printf("Вам не повезло.Попробуйте еще раз.\n");
}