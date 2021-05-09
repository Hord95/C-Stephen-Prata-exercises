#include <stdio.h>
#define COLS 5
void copy_arr(double target1[][COLS],double ar[][COLS],int n);
void copy_ptr(double target2[][COLS],double ar[][COLS],int n);

int main(void)
{
	double source[2][COLS]={{1.1,2.2,3.3,4.4,5.5},{6.6,7.7,8.8,9.9,10.1}};
	double target1[2][COLS];
	double target2[2][COLS];
	copy_arr(target1,source,COLS);
	copy_ptr(target2,source,COLS);
}
void copy_arr(double target1[][COLS],double ar[][COLS],int n)
{
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<n;j++)
		{
		target1[i][j]=ar[i][j];
		printf("%.1f ",target1[i][j]);
		}
		printf("\n");
	}
}
void copy_ptr(double target2[][COLS],double ar[][COLS],int n)
{
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<n;j++)
		{
			*(*(target2+i)+j)=*(*(ar+i)+j);
			printf("%.1f ",*(*(target2+i)+j));
		}
			printf("\n");
	}
}
