#include <stdio.h>

int main(void)
{
	int min;
	int max;
	printf("Inpud min and max limits:");
	scanf("%d %d",&min,&max);
	printf("number square cube\n");
	for (int i=min;i<=max;i++)
	{
		printf("%6d %6d %4d\n",i,i*i,i*i*i);
	}
	return 0;
}
