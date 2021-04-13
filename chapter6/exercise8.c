#include <stdio.h>

int main(void)
{
	float number1,number2;
	float result;
	float scan;
	scan=scanf("%f %f",&number1,&number2);
	while (scan==2)
	{
		result=(number1-number2)/(number1*number2);
		printf("%f\n",result);
		scan=scanf("%f %f",&number1,&number2);
	}
	return 0;
}
