#include <stdio.h>

int main(void)
{
	int limit;
	float result1=0;
	float result2=0;
	float minus=1;
	printf("Введите лимит значений: ");
	scanf("%d",&limit);
	while (limit>0)
	{
	for (float i=1;i<=limit;i++)
	{
		result1+=(1/i);
		result2+=((1/i)*minus);
		minus=minus*(-1.0);
	}
	
	printf("1.0+1.0/2.0+1.0/3.0+1.0/4.0+...=%f\n",result1);
	printf("1.0-1.0/2.0+1.0/3.0-1.0/4.0+...=%f\n", result2);
	printf("Введите новый лимит значений ");
	scanf("%d",&limit);
	result1=0;
	result2=0;
	minus=1;
	}
	return 0;
}

