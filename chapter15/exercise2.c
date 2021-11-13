#include <stdio.h>
#include <stdlib.h>
int sum(int number1,int number2);
int multi(int number1,int number2);
int diff(int number1,int number2);
int main(int argc,char * argv[])
{
	int number1;
	int number2;
	number1=atoi(argv[1]);
	number2=atoi(argv[2]);
	int test1=number1;
	int test2=number2;
	if (argc<3 || argc >3)
	{
		fprintf(stderr,"Error\n");
		exit(EXIT_FAILURE);
	}
	
		while(test1!=0)
	{
		if (test1%10>1)
		{
			fprintf(stderr,"Error\n");
			exit(EXIT_FAILURE);
			break;
		}
		test1/=10;
	}
		while(test2!=0)
	{
		if (test2%10>1)
		{
			fprintf(stderr,"Error\n");
			exit(EXIT_FAILURE);
			break;
		}
		test2/=10;
	}
	printf("%s | %s = %d\n",argv[1],argv[2],sum(number1,number2));
	printf("%s & %s = %d\n",argv[1],argv[2],multi(number1,number2));
	printf("%s ^ %s = %d\n",argv[1],argv[2],diff(number1,number2));
}
int sum (int number1,int number2)
{
	int exp=1;
	int result=0;
	int resnum;
	while ((number1!=0 && number2!=0) || number1!=0 || number2!=0)
	{
		if ((number1%10+number2%10)>=1)
			resnum=1;
		else
			resnum=0;
		result+=resnum*exp;
		number1/=10;
		number2/=10;
		exp*=10;
	}
	return result;
}
int multi (int number1,int number2)
{
	int exp=1;
	int result=0;
	int resnum;
	while ((number1!=0 && number2!=0) || number1!=0 || number2!=0)
	{
		if (( number1%10*number2%10)==1)
			resnum=1;
		else
			resnum=0;
		result+=resnum*exp;
		number1/=10;
		number2/=10;
		exp*=10;
	}
	return result;
}
int diff(int number1,int number2)
{
	int exp=1;
	int result=0;
	int resnum;
	while ((number1!=0 && number2!=0) || number1!=0 || number2!=0)
	{
		if (( number1%10+number2%10)==1)
			resnum=1;
		else
			resnum=0;
		result+=resnum*exp;
		number1/=10;
		number2/=10;
		exp*=10;
	}
	return result;
}


