#include <stdio.h>

int main(void)
{
	const float perc=0.08;
	float money=1000000;
	int years=0;
	while (money>=0)
	{
		money-=100000;
		money=money*(1+perc);
		years++;
	}
	printf("%d years",years);
	return 0;
}
