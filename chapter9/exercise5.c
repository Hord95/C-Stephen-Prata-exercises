#include <stdio.h>
void larger_of(double * x,double * y);

int main(void)
{
	double x;
	double y;
	scanf("%lf %lf",&x,&y);
	larger_of(&x,&y);
	printf("%lf %lf",x,y);
	return 0;
}
void larger_of(double * x, double * y)
{
	if (*x>=*y)
		*y=*x;
	else
		*x=*y;
}

		
