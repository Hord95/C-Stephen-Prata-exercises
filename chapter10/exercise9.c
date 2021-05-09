#include <stdio.h>
void copy(int n,int m,double ar[n][m]);
void show(int n,int m,double ar[n][m],double new_ar[n][m]);

int main(void)
{
	double ar[3][5]={{1.1,2.2,3.3,4.4,5.5},{6.6,7.7,8.8,9.9,10.1},{11.11,12.12,13.13,14.14,15.15}};
	copy(3,5,ar);
}
void copy(int n,int m,double ar[n][m])
{
	double new_ar[n][m];
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			new_ar[i][j]=ar[i][j];
		}
	}
	show(n,m,ar,new_ar);
}
void show(int n,int m,double ar[n][m],double new_ar[n][m])
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			printf("%.2f ",ar[i][j]);
		}
		printf("\n");
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			printf("%.2f ",new_ar[i][j]);
		}
		printf("\n");
	}
}
					
					

