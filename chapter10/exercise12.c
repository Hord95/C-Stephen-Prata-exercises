#include <stdio.h>
#define MONTHS 12
#define YEARS 5
void amount_subtot(const float rain[][12],int n);
void avg_subtot(const float rain[][12],int n);

int main(void)
{
	const float rain[YEARS][MONTHS]=
		{
			{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
			{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
			{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
			{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
			{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
		};
	amount_subtot(rain,YEARS);
	avg_subtot(rain,YEARS);
	return 0;
}
void amount_subtot(const float rain[][12],int n)
{
	int year,month;
	float subtot,total;
	printf("ГОД        Количество ОСАДКОВ  (в дюймах)\n");
	for (year=0,total=0;year<n;year++)
	{
		for (month=0,subtot=0;month<MONTHS;month++)
			subtot+=rain[year][month];
		printf("%5d %15.1f\n", 2010+year, subtot);
		total+=subtot;
	}
}
void avg_subtot(const float rain[][12],int n)
{
	int year,month;
	float subtot,total;
	printf("\nСреднегодовое количсетсво осадков оставляет %.1f дюймов.\n\n",
			total/n);
	printf("СРЕДНЕМЕСЯЧНОЕ КОЛИЧЕСТВО ОСАДКОВ: \n\n");
	printf("  Янв  Фев  МАР  Апр  Май  Июн  Июл  Авг  Сен  Окт");
	printf("  Ноя  Дек\n");
	for (month=0;month<MONTHS;month++)
	{
		for (year=0,subtot=0;year<n;year++)
			subtot+=rain[year][month];
		printf("%4.1f ", subtot/n);
	}
	printf("\n");
}

			
