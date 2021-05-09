#include <stdio.h>
#define SIZE 4
void sum(int ar1[],int ar2[],int ar3[],int n);

int main(void)
{
	int ar1[SIZE]={2,4,5,8};
	int ar2[SIZE]={1,0,4,6};
	int ar3[SIZE];
	sum(ar1,ar2,ar3,SIZE);
}
void sum(int ar1[],int ar2[],int ar3[],int n)
{
	for (int i=0;i<n;i++)
	{
		ar3[i]=ar1[i]+ar2[i];
		printf("%d ",ar3[i]);
	}
}
