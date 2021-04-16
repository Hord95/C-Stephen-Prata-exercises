#include <stdio.h>

int main(void)
{
	int category;
	int salary;
	float taxes;
	printf("1)Одинокий\t\t\t15%% с первых 17850$ плюс 28%% от суммы,\n\t\t\t\tпревышающей указанную\n");
	printf("2)Глава Семейства\t\t15%% с первых 23900$ плюс 28%% от суммы,\n\t\t\t\tпревышающей указанную\n");
	printf("3)Состоит в браке,совместное\t15%% с первых 29750$ плюс 28%% от суммы,\nведение хозяйства\t\tпревышающей указанную\n");
	printf("4)Состоит в браке,раздельное\t15%% с первых 14875$ плюс 28%% от суммы,\nведение хозяйства\t\tпревышающей указанную\n");
	printf("0) Выход \n");
	printf("Введите категорию ");
	while (scanf("%d",&category))
	{
		if (category==1 || category==2 || category==3 || category==4)
		{
			
		
		
		printf("Введите сумму заработной платы ");
		scanf("%d",&salary);
		if (category==1)
		{
			if(salary>17850)
			{
				taxes=17850*0.15+0.28*(salary-17850);
			} else {
				taxes=salary*0.15;
			}
		}
		if (category==2)
		{
			if(salary>23900)
			{
				taxes=23900*0.15+0.28*(salary-23900);
			} else {
				taxes=salary*0.15;
			}
		}if (category==3)
		{
			if(salary>29750)
			{
				taxes=29750*0.15+0.28*(salary-29750);
			} else {
				taxes=salary*0.15;
			}
		}if (category==1)
		{
			if(salary>14875)
			{
				taxes=14875*0.15+0.28*(salary-14875);
			} else {
				taxes=salary*0.15;
			}
		}
		printf("taxes=%.2f\n",taxes);
		}
		else if(category==0){
		break;
		}
		printf("Введите категорию ");
	}
	
	return 0;
}
