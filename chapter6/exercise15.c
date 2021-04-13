#include <stdio.h>

int main(void)
{
	char array[255];
	char letter;
	int i=0;
	while(i<255){
	while(scanf("%c",&letter),letter!='\n')
	{
		array[i]=letter;
	}
	i++;
	}
	for (int i=0;i<255;i++)
		printf("%c\n",array[i]);

	return 0;
}
