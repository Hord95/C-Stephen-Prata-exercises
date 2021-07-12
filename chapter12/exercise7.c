#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(void)
{
int dice,roll;
int sides;
int throwes;
int * ar;
srand(time(0));
printf("Введите количество бросков или q для выхода \n");
while(scanf("%d",&throwes)==1 && throwes!='q')
{   
    int total;
    ar=malloc(throwes*sizeof(int));
    printf("Сколько граней и костей?");
    scanf("%d %d",&roll,&dice);
    for (int i=0;i<throwes;i++)
    {
        total=0;
        for(int j=0;j<dice;j++)
            total+=(rand()%roll)+1;
        ar[i]=total;
    }
    printf("Имеем %d бросаний %d костей и %d граней\n",throwes,dice,roll);
    for (int i=0;i<throwes;i++)
    {
        printf("%d ",ar[i]);
    } 
    printf("\n");   
    free(ar);
    printf("Введите количество бросков или q для выхода \n");
}
   return 0;
}