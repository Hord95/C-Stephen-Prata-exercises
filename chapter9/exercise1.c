#include <stdio.h>
double min(double x,double y);

int main(void)
{
	double num1;
	double num2;
	scanf("%lf %lf",&num1,&num2);
	printf("%f\n",min(num1,num2));
	return 0;
}
double min(double x,double y)
{
	double min;
	min=(x<=y) ? x : y;
	return min;
}
