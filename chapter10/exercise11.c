#include <stdio.h>
#define ROWS 3
#define COLS 5
void show(int ar[][5],int rows);
void incr(int ar[][5],int rows);

int main(void)
{
	int ar[ROWS][COLS]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
	show(ar,ROWS);
	incr(ar,ROWS);
	show(ar,ROWS);
}
void show(int ar[][5],int rows)
{
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<5;j++)
			printf("%d ",ar[i][j]);
	printf("\n");
	}
} 
void incr(int ar[][5],int rows)
{
	for (int i=0;i<rows;i++)
	{
		for (int j=0;j<5;j++)
			ar[i][j]=ar[i][j]*2;
	}
}
	
	
