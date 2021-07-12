#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int SIZE=100;
	int numbers[SIZE];
	int number;
	int count=0;
	int temp;
	while (count<100)
	{
		number=rand()%10+1;
		if (number >=0 && number<=10)
		{
			numbers[count]=number;
			count++;
		}
	}
	for (int i=0;i<SIZE-1;i++)
		{
			for (int j=0;j<SIZE-1;j++)
			{
				if (numbers[j]<numbers[j+1])
				{
					temp=numbers[j+1];
					numbers[j+1]=numbers[j];
					numbers[j]=temp;
				}
			}
		}
	for (int i=0;i<SIZE;i++)
		printf("%d ",numbers[i]);
	return 0;
}
