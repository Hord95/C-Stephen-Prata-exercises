#include <stdio.h>

int main(void)
{
	char letter;
	scanf("%c",&letter);
	char start='A';
	int row,spaces,up,down;
	for (row=0;row<=(letter-64)-1;row++)
	{
		for (spaces=row;spaces<(letter-64)-1;spaces++) //spaces
		{
		printf(" ");
		}
		for (up=row,start='A';up>=0;up--,start++) //up
		{
			printf("%c",start);
		}
		for (down=row,start='A'+down;down>0;down--,start--)
		{
			printf("%c",start);
		}
	printf("\n");
	}
	return 0;
}
