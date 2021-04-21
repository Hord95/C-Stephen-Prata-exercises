#include <stdio.h>

int main(void)
{
	int guess=50;
	char answer;
	int min=0;
	int max=100;
	printf("Вывберите целое число в интервавле от 1 до 100.Я попробую угадать ");
	printf("его.\nНажмите клавишу y, если моя догадка верна и ");
	printf("\nклавишу n в противном случае.\n");
	printf("Вашим числом является %d?\n",guess);
	while ((answer=getchar())!='y')
		if(answer=='m')
		{
			min=guess;//50 //75 
			guess=(min+max+1)/2; //75   
			printf("Ладно тогда это %d\n",guess);
		
		}
		else if(answer=='l')
		{
		max=guess; //50 25
		guess=(min+max-1)/2;//25
		printf("Ладно, тогда это %d?\n",guess);
		continue;
		}
	printf("Я знал, что у меня получится!\n");
	return 0;
}
