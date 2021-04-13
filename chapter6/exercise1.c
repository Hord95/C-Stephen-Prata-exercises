#include <stdio.h>

int main(void)
{
	char array[26];
	char letter ='a';
	for (int i=0;i<26;i++)
	{
		array[i]=letter+i;
	}
	for (int i=0;i<26;i++)
	{
		printf("%c\n",array[i]);
	}
	return 0;
}

