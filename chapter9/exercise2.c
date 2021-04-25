#include <stdio.h>
void chline(char ch,int i,int j);

int main(void)
{

	char ch;
	int i;
	int j;
	scanf("%c %d %d",&ch,&i,&j);
	chline(ch,i,j);
	return 0;
}
void chline(char ch,int i,int j)
{
	int k=0;
	for (k;k<=j;k++){
	if (k<i){
		putchar(' ');
	}
	else 
	{
		putchar(ch);
	}
	}
	putchar('\n');
}
