#include <stdio.h>
void func(char ch);

int main(void)
{
	char ch;
	while((scanf("%c",&ch))!=EOF)
	{
		func(ch);
	}
	return 0;
}
void func(char ch)
{ 
	if(ch!='\n'){
	if(ch>=65 && ch<=90)
		printf("%d\n",ch-64);
	else if(ch>=97 && ch<=122)
		printf("%d\n",ch-96);
	else 
		printf("-1\n");
	}
}

