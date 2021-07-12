#include <stdio.h>
static int count=0;
int func_count(void);
int main(void)
{   
    int ch;
    printf("Запуска функции введите 1 для запуска \n");
    scanf("%d",&ch);
    for (int i=0;ch==1;i++)
    {
        func_count();
        scanf("%d",&ch);
    }
    printf("%d",count);
}
int func_count(void)
{   
    ++count;
    return count;
}