#include <stdio.h>
void triple(double x);
int main(void)
{
	double number;
	scanf("%lf",&number);
	triple(number);
	return 0;
}
void triple(double x)
{
	double result;
	result=x*x*x;
	printf("result=%f\n",result);
}
