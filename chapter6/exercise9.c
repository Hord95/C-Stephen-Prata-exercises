#include <stdio.h>
float func(float x,float y);
float scan;
int main(void)
{
	float number1,number2;
	scan=scanf("%f %f",&number1,&number2);
	while (scan==2)
	{
		printf("%f\n",func(number1,number2));
		scan=scanf("%f %f",&number1,&number2);
	}
	printf("%f",func(number1,number2));
	return 0;
}
float func(float x,float y)
{
	float result;
	result=(x-y)/(x*y);
	return result;
}
