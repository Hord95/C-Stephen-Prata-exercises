#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100
 int main(void)
 {
     int count_word=0;
     int count_Uletter=0;
     int count_Lletter=0;
     int count_marks=0;
     int count_number=0;
     char text[SIZE];
     FILE * f;
     char * read;
     f=fopen("test.txt","r");
     while(read=fgets(text,SIZE,f))
     {
         if (read==NULL)
         {
             break;
         }
         for (int i=0;i<strlen(text)-1;i++)
         {
            if(ispunct(text[i]))
                count_marks+=1;
            else if (isupper(text[i]))
                count_Uletter+=1;
            else if (islower(text[i]))
                count_Lletter+=1;
            else if (isdigit(text[i]))
                count_number+=1;
            if ((islower(text[i]) && (isspace(text[i+1]) || text[i+1]=='\0')) || (isupper(text[i]) && (isspace(text[i+1]) || text[i+1]=='\0')))
                count_word+=1;
            
         }
     }
     printf("counts marks=%d\n"
                "count upper letters=%d\n"
                "count lowwer letters=%d\n"
                "count numbers=%d\n"
                "count words=%d\n",count_marks,count_Uletter,count_Lletter,count_number,count_word);
 }