#include <stdio.h>
#include <string.h>
#define SIZE 81
int func(char * text,int letter);
int main(void)
{
	char text[SIZE];
	char letter;
	while(fgets(text,SIZE,stdin))
	{
	scanf("%c",&letter);
	printf("%d\n",func(text,letter));
	fgets(text,SIZE,stdin);
	}
}
int func(char * text,int letter)
{
	for (int i=0;i<strlen(text);i++)
		{
			if ((int)text[i]==letter)
				{
					return i;
					break;
				}
		}
	return 0;
}
