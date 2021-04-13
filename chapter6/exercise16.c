#include <stdio.h>

int main(void)
{
	const float perc1=0.1;
	const float perc2=0.05;
	float sum1=100;
	float sum2=100;
	float result1=sum1;
	float result2=sum2;
	int years=0;
	while (result2<=result1)
	{
		result1=result1+sum1*perc1;
		result2=result2+result2*perc2;
		years+=1;
	}
	printf("%f\n%f\n%d\n",result1,result2,years);
	return 0;
}
