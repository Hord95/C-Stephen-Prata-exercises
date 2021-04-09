#include <stdio.h>

int main(void)
{
	float height;
	int pounds;
	float inches;
	printf("Введите высоту в сантиметрах:");
	scanf("%f",&height);
	while (height>0)
	{
	pounds=height/30.48;
	inches=(height-pounds*30.48) / 2.54;
	printf("%.1f см = %d футов, %.1f дюймов\n",height,pounds,inches);
	scanf("%f",&height);
	}
	return 0;
}
