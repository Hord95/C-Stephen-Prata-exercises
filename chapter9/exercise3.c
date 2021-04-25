#include <stdio.h>
void func(char ch,int x,int y);

int main(void)
{
	char ch;
	int num1;
	int num2;
	scanf("%c %d %d",&ch,&num1,&num2);
	func(ch,num1,num2);
	return 0;
}

void func(char ch,int x,int y)
{
	for (int i=0;i<y;i++)
	{
		for (int j=0;j<x;j++)
			putchar(ch);
		putchar('\n');
	}
}
