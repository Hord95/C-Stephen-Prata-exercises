#include<stdio.h>
void Temperatures(double fahren);
int main(void)
{
	double fahren;
	while (scanf("%lf",&fahren)==1)
	{
		Temperatures(fahren);
	}
	return 0;
}

void Temperatures(double fahren)
{
	const double f_to_c=32.0;
	const double c_to_k=273.16;
	double celsius;
	double kelvin;
	celsius=5.0/9.0*(fahren-f_to_c);
	kelvin=celsius+c_to_k;
	printf("Температура по Фаренгейту = %.2f,",fahren);
	printf("температура по Цельсию = %.2f ,", celsius);
	printf("температура по Кельвину = %.2f .\n",kelvin);
}
