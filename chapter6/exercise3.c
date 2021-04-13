#include <stdio.h>

int main(void)
{
	int firstletter='F';
	for (int i=0;i<=5;i++)
	{
		for (int j=0;j<=i;j++)
		{

			printf("%c",firstletter-j);
			
		}
		printf("\n");
	}
	return 0;
}
