#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[20];
	char new_word[20];
	scanf("%s",word);
	for (int i=0;i<strlen(word);i++)
	{
		new_word[strlen(word)-i-1]=word[i];
	}
	printf("%s\n",new_word);
	return 0;
}
