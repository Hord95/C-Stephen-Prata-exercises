#include <stdio.h>

int main(void)
{
	int number;
	int count_p=0;
	int count_m=0;
	int amount_p=0;
	int amount_m=0;
	float avg_p;
	float avg_m;
	while(scanf("%d",&number)==1 && number!=0)
	{
		if(number>0)
		{
			++count_p;
			amount_p+=number;
		}
		else
		{
			++count_m;
			amount_m+=number;
		}
	}
	avg_p=(float)amount_p/(float)count_p;
	avg_m=(float)amount_m/(float)count_m;
	printf("кол-во положительный чисел=%d, "
	       "средняя сумма положительный чисел=%.2f, "
	       "кол-во отрицательных чисел=%d, "
	       "средняя сумма отрицательных чисел=%.2f\n",
	       count_p,avg_p,count_m,avg_m);
	return 0;
}
