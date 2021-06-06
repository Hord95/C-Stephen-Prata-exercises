#include <stdio.h>
#define SIZE 81
int is_within(char letter,char * text);
int main(void)
{
char letter;
char text[SIZE];
while(fgets(text,SIZE,stdin))
	{
	scanf("%c",&letter);
	printf("%d\n",is_within(letter,text));
	fgets(text,SIZE,stdin);
	}
}
int is_within(char letter,char * text)
{
	for (int i=0;i<SIZE;i++)
	{
		if ((int)text[i]==(int)letter)
		{	
			return 1;
			break;
		}	
	}
return 0;
}

