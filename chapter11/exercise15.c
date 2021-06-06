#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100
int atoi(char * text);

int main(void)
{
    char text[SIZE];
    fgets(text,SIZE,stdin);
    printf("%d\n",atoi(text));
    return 0;
}
int atoi(char * text)
{
    int numbers[SIZE];
    int j=0;
    for (int i =0;i<strlen(text)-1;i++)
    {
        if (isdigit(text[i]))
            {
                numbers[j]=text[i]-48;
                j++;
            }
        else 
        {
            return 0;
        }
    }
    int result=numbers[0];
    for (int i = 1; i < j; i++)
        result=result*10+numbers[i];
    return result;
}