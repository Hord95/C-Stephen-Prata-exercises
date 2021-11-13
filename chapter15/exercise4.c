#include <stdio.h>
int find(int number,int pos);
int main(void)
{
	int value;
	int position;
	scanf("%d%d",&value,&position);
	printf("%d\n",find(value,position));
	return 0;
}
int find(int number,int pos)
{
	for (int i=0;i<pos;i++)
	number/=2; 
	if (number%2==1)
		return 1;
	else
		return 0;
}
