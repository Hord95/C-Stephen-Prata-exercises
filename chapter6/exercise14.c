#include <stdio.h>

int main(void)
{
	double array1[8];
	double array2[8]={0,0,0,0,0,0,0,0};
	for (int i=0;i<8;i++)
	{
		scanf("%lf",&array1[i]);
	}
	for (int i=0;i<8;i++)
	{
		for (int j=0;j<=i;j++)
		{
			array2[i]+=array1[j];
		}
	}
	for (int i=0;i<8;i++)
	{
		printf("%10f ",array1[i]);
	}
	printf("\n");
	for (int i=0;i<8;i++)
	{
		printf("%10f ",array2[i]);
	}
	printf("\n");
	return 0;
}
				
