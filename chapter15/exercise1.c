#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
int bitoint(char * text);
int main(void)
{
	char number[SIZE];
	fgets(number,SIZE,stdin);
	printf("%d",bitoint(number));
}
int bitoint(char * text)
{
	int number;
	int exp=1;
	int new_number=0;
	number=atoi(text);
	int test=number;
	while(test!=0)
	{
		if (test%10>1)
		{
			fprintf(stderr,"Error\n");
			exit(EXIT_FAILURE);
			break;
		}
		test/=10;
	}
		while ( number!=0)
	{
		new_number+=(number%10)*exp;
		exp*=2;
		number=number/10;
	}
	return new_number;
}
