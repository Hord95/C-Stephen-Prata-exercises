#include <stdio.h>
#include <string.h>
#define SIZE 81
void reverse(char * text1,char * text2);
int main(void)
{
	char text1[SIZE];
	char text2[SIZE];
	fgets(text1,SIZE,stdin);
	reverse(text1,text2);
	fputs(text2,stdout);
	printf("\n");
	return 0;
}
void reverse(char * text1,char * text2)
{
	int j=strlen(text1)-1;
	for (int i=0;i<strlen(text1);i++)
	{
		text2[j]=text1[i];
		--j;
	}
}

