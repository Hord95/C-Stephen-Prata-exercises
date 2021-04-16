#include <stdio.h>
#define OVERTIME 1.5
#define TAXRATE_FIRST 0.15
#define TAXRATE_NEXT 0.2
#define TAXRATE_REMAINE 0.25

int main(void)
{
	int hours;
	int number;
	float rate;
	float salary;
	float taxes;
	float pure_salary;
	printf("Введите число,соответствующее желаемой тарифной ставке или действие\n");
	printf("1) $8.75/ч\t 2)$9.33/ч\n3)$10.00/ч\t 4)$11.20/ч\n5)Выход\n");
	scanf("%d",&number);
	switch(number)
	{
		case 1 :rate=8.75;
			   break;
		case 2: rate=9.33;
			  break;
		case 3: rate=10;
			  break;
		case 4: rate=11.2;
			  break;
		case 5: break;
	
	}
	
	while (number!=5)
	{
	if (number==1 || number==2 ||number ==3||number==4)
	{
	printf("Введите кол-во часов ");
	scanf("%d",&hours);
	if (hours>40)
	{
		salary=(40*rate)+((hours-40)*OVERTIME*rate);
	} else {
		salary=hours*rate;
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
	printf("Введите число,соответствующее желаемой тарифной ставке или действие\n");
	printf("1) $8.75/ч\t 2)$9.33/ч\n3)$10.00/ч\t 4)$11.20/ч\n5)Выход\n");
	scanf("%d",&number);
	}
	else 
	{
	printf("Введите число,соответствующее желаемой тарифной ставке или действие\n");
	printf("1) $8.75/ч\t 2)$9.33/ч\n3)$10.00/ч\t 4)$11.20/ч\n5)Выход\n");
	scanf("%d",&number);
	}
	}
		
	return 0;
}

