#include <stdio.h>

int main(void)
{
	int number1,number2;
	int amount;
	int scan;
	printf("Введите нижний и верхний целочисленные пределы: ");
	scan=scanf("%d %d",&number1,&number2);
	while(scan==2,number2>number1)
	{
		amount=0;
	for (int i=number1;i<=number2;i++)
		{	
		amount+=i*i;
		}
	printf("Сумма квадратов целых чисел от %d до %d равна %d\n",number1*number1,number2*number2,amount);
	printf("Введите следующую комбинацию пределов : ");
	scan=scanf("%d %d",&number1,&number2);
	}
	printf("Работа завершена\n");
	return 0;
}
