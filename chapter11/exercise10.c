#include <stdio.h>
#include <string.h>
#define SIZE 81
void no_spaces(char * text,char * text2);
int main(void)
{
char text[SIZE];
char text2[SIZE];
while (fgets(text,SIZE,stdin))
{
	if (strlen(text)==1)
		break;
	no_spaces(text,text2);
	fputs(text2,stdout);
	}
}
void no_spaces(char * text,char * text2)
{
	int j=0;
	for (int i=0;i<strlen(text);i++)
	{
		if (text[i]==' ')
			continue;
		text2[j]=text[i];
		j+=1;
	}
}