#include <stdio.h>
#define ROWS 3
#define COLS 5
void show(double ar[][COLS],int n);
double avg_every_ar(double ar[][COLS],int n);
double avg_all_ar(double ar[][COLS],int n);
double max(double ar[][COLS],int n);

int main(void)
{
	double ar[3][5];
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<5;j++)
			scanf("%lf",&ar[i][j]);
	}
	printf("%f\n",avg_every_ar(ar,0));
	printf("%f\n",avg_every_ar(ar,1));
	printf("%f\n",avg_every_ar(ar,2));
	printf("%f\n",avg_all_ar(ar,3));
	printf("%f\n",max(ar,3));
}

void show(double ar[][COLS],int n)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<5;j++)
		{
			printf("%f ",ar[i][j]);
		}
		printf("\n");
	}
}
double avg_every_ar(double ar[][COLS],int n)
{
	double total;
	for (int i=n;i<=n;i++)
	{
	for (int j=0;j<COLS;j++)
		total+=ar[i][j];
	}
	return total;
}
double avg_all_ar(double ar[][COLS], int n)
{
	double total;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<COLS;j++)
			total+=ar[i][j];
	}
	return total;
}
double max(double ar[][COLS],int n)
{
	double max=ar[0][0];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<COLS;j++)
		{
			if (ar[i][j]>=max)
				max=ar[i][j];
		}
	}
	return max;
}



	

					
