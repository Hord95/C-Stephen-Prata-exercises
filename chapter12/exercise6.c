#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
int main(void)
{
    int i=0;
    int number;
    int count_ten=0;
    int count_nine=0;
    int count_eight=0;
    int count_seven=0;
    int count_six=0;
    int count_five=0;
    int count_four=0;
    int count_three=0;
    int count_two=0;
    int count_one=0;
    int random;
    while(i<10)
    {   
        scanf("%d",&random);
        srand(random);
        for (int i=0;i<1000;i++)
            {
                number=rand()%10+1;
                if (number==10)
                    ++count_ten;
                else if (number==9)
                    ++count_nine;
                else if (number==8)
                    ++count_eight;
                else if (number==7)
                    ++count_seven;
                else if (number==6)
                    ++count_six;
                else if (number==5)
                    ++count_five;
                else if (number==4)
                    ++count_four;
                else if (number==3)
                    ++count_three;
                else if (number==2)
                    ++count_two;
                else if (number==1)
                    ++count_one;
            }
            printf("10 - %d\n"
                      "9 - %d\n"
                      "8 - %d\n"
                      "7 - %d\n"
                      "6 - %d\n"
                      "5 - %d\n"
                      "4 - %d\n"
                      "3 - %d\n"
                      "2 - %d\n"
                      "1 - %d\n",count_ten,count_nine,count_eight,count_seven,count_six,count_five,count_four,count_three,count_two,count_one);
            
            i++;
            count_ten=0;
            count_nine=0;
            count_eight=0;
            count_seven=0;
            count_six=0;
            count_five=0;
            count_four=0;
            count_three=0;
            count_two=0;
            count_one=0;
    }
    return 0;
}