#include <stdio.h>
#define OVERTIME 1.5
#define TAXRATE_FIRST 0.15
#define TAXRATE_NEXT 0.2
#define TAXRATE_REMAINE 0.25

int main(void)
{
	int hours;
	char number;
	float rate;
	float salary;
	float taxes;
	float pure_salary;
	printf("Введите число,соответствующее желаемой тарифной ставке или действие\n");
	printf("a) $8.75/ч\t b)$9.33/ч\nc)$10.00/ч\t d)$11.20/ч\nq)Выход\n");
	scanf("%c",&number);
	switch(number)
	{
		case 'a' :rate=8.75;
			   break;
		case 'b' : rate=9.33;
			  break;
		case 'c': rate=10;
			  break;
		case 'd': rate=11.2;
			  break;
		case 'q': break;
	
	}
	
	while (number!='q')
	{
	if (number=='a' || number=='b' ||number =='c'||number=='d')
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
	printf("a) $8.75/ч\t b)$9.33/ч\nc)$10.00/ч\t d)$11.20/ч\nq)Выход\n");
	scanf("%c",&number);
	}
	else 
	{
	printf("Введите число,соответствующее желаемой тарифной ставке или действие\n");
	printf("a) $8.75/ч\t b)$9.33/ч\nc)$10.00/ч\t d)$11.20/ч\nq)Выход\n");
	scanf("%c",&number);
	}
	}
		
	return 0;
}

