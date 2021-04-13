#include <stdio.h>
int main(void)
{
	int number;
	int number_new;
	scanf("%i",&number);
	number_new=number;
	while (number_new<=number+10)
	{
		printf("%d ",number_new);
		number_new=number_new+1;
	}
	printf("\n");
	return 0;
}
