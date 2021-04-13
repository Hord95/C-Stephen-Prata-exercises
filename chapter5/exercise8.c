#include <stdio.h>

int main(void)
{
	int number1,number2;
	printf("Эта программа вычисляет результаты по деления по модулю\n");
	printf("Введите целое число, которое будет служить вторым"
	" операндом: ");
	scanf("%d",&number2);
	printf("Теперь введите первый операнд:");
	scanf("%d",&number1);
	while(number1 > 0)
	{
	printf("%d %% %d равно %d\n",number1,number2,number1 % number2);
	printf("Введите следующее число для первого операнда \
(<=0 для выхода из программы) :");
	scanf("%d",&number1);
	}
	return 0;
}
