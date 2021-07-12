#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50
int main(void) 
{
    int count_words;
    printf("Сколько слов вы хотите ввести? ");
    scanf("%d",&count_words);
    char ** words;
    char text[SIZE];
    char * time_word;
    time_word=malloc(SIZE*sizeof(char));
    printf("Теперь введите %d слов: \n",count_words);
    scanf("%d",&count_words);
    words= malloc(count_words*sizeof(char *));
    fgets(text,SIZE,stdin);// "he"
    int j=0;//text
    int x=0;//word
    int ar=0;//array
    while (j<strlen(text))    
    {
        if (text[j]==' ' || text[j]=='\n' || text[j]=='\0')
            {         
                time_word[x]='\0';
                x=0;
                *(words+ar)=malloc(strlen(time_word)*sizeof(char));
                strncpy(words[ar],time_word,strlen(time_word));              
                ++j;
                ++ar;
                free(time_word);
                time_word=malloc(SIZE*sizeof(char));       
            }
            else 
            {
                time_word[x]=text[j];
                ++x;
                ++j;   
            }
     }
     free(time_word);   
     for (int i=0;i<count_words;i++)
        {
            fputs(words[i],stdout);
            printf("\n");
            free(words[i]);
        }
    return 0;
}