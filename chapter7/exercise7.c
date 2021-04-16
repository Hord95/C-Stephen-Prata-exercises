#include <stdio.h>
#define RATE 10.00
#define OVERTIME 1.5
#define TAXRATE_FIRST 0.15
#define TAXRATE_NEXT 0.2
#define TAXRATE_REMAINE 0.25

int main(void)
{
	int hours;
	float salary;
	float taxes;
	float pure_salary;
	printf("Введите кол-во часов:");
	scanf("%d",&hours);
	if (hours>40)
	{
		salary=(40*RATE)+((hours-40)*OVERTIME*RATE);
	} else {
		salary=hours*RATE;
	}
	if (salary<=300){
		taxes=salary*TAXRATE_FIRST;
	} else if ( salary>300 && salary<=450) {
		taxes=300*TAXRATE_FIRST+ ((salary-300)*TAXRATE_NEXT);
	} else {
		taxes=300*TAXRATE_FIRST+150*TAXRATE_NEXT+((salary-450)*TAXRATE_REMAINE);
	}
	pure_salary=salary-taxes;
	printf("Всего начислений = %.2f, налоги=%.2f , чистая зарплата=%.2f\n",salary,taxes,pure_salary);
	return 0;
}

