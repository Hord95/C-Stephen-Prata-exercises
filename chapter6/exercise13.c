#include <stdio.h>

int main(void)
{
	int array[8];
	for (int i=0;i<8;i++)
	{
		array[i]=(i+1)*(i+1);
	}
	int i=0;
	do 
	{
		printf("%d\n",array[i]);
		i++;
	}
	while(i<8);
	return 0;
}
