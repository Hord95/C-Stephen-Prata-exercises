#include <stdio.h>
void show(int n,int m,double ar[n][m]);
double avg_every_ar(int n,int m,double ar[n][m]);
double avg_all_ar(int n,int m,double ar[n][m]);
double max(int n,int m,double ar[n][m]);

int main(void)
{
	double ar[3][5];
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<5;j++)
			scanf("%lf",&ar[i][j]);
	}
	printf("%f\n",avg_every_ar(0,5,ar));
	printf("%f\n",avg_every_ar(1,5,ar));
	printf("%f\n",avg_every_ar(2,5,ar));
	printf("%f\n",avg_all_ar(3,5,ar));
	printf("%f\n",max(3,5,ar));
}

void show(int n,int m,double ar[n][m])
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			printf("%f ",ar[i][j]);
		}
		printf("\n");
	}
}
double avg_every_ar(int n,int m,double ar[n][m])
{
	double total;
	for (int i=n;i<=n;i++)
	{
	for (int j=0;j<m;j++)
		total+=ar[i][j];
	}
	return total;
}
double avg_all_ar(int n,int m,double ar[n][m])
{
	double total;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
			total+=ar[i][j];
	}
	return total;
}
double max(int n,int m,double ar[n][m])
{
	double max=ar[0][0];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			if (ar[i][j]>=max)
				max=ar[i][j];
		}
	}
	return max;
}



	

					
