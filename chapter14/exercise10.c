#include <stdio.h>
float sum (float num1,float num2);
float diff (float num1,float num2);
float div (float num1,float num2);
float mult (float num1,float num2);
int main(void)
{
    float (* func) (float num1,float num2);
    float num1,num2;
    int ans;
    printf("1)sum of 2 numbers\n 2)diff of 2 numbers\n 3)div of 2 numbers\n 4)mult of 2 numbers\n 5)exit\n");
    scanf("%d",&ans);
    while (ans>=1 || ans<=5)
    {   
        if (ans==1)
        {
            printf("Enter 2 numbers\n");
            scanf("%f %f",&num1,&num2);
            func=sum;
            printf("%f\n",(*func)(num1,num2));
            printf("1)sum of 2 numbers\n 2)diff of 2 numbers\n 3)div of 2 numbers\n 4)mult of 2 numbers\n 5)exit\n");
            scanf("%d",&ans);
            
        }
        else if (ans==2)
        {
            printf("Enter 2 numbers\n");
            scanf("%f %f",&num1,&num2);
            func=diff;
            printf("%f\n",(*func)(num1,num2));
            printf("1)sum of 2 numbers\n 2)diff of 2 numbers\n 3)div of 2 numbers\n 4)mult of 2 numbers\n 5)exit\n");
            scanf("%d",&ans);
            
        }
        else if (ans==3)
        {
            printf("Enter 2 numbers\n");
            scanf("%f %f",&num1,&num2);
            func=div;
            printf("%f\n",func(num1,num2));
            printf("1)sum of 2 numbers\n 2)diff of 2 numbers\n 3)div of 2 numbers\n 4)mult of 2 numbers\n 5)exit\n");
            scanf("%d",&ans);
            
        }
        else if (ans==4)
        {
            printf("Enter 2 numbers\n");
            scanf("%f %f",&num1,&num2);
            func=mult;
            printf("%f\n",func(num1,num2));
            printf("1)sum of 2 numbers\n 2)diff of 2 numbers\n 3)div of 2 numbers\n 4)mult of 2 numbers\n 5)exit\n");
            scanf("%d",&ans);
            
        }
        else if (ans==5)
            break;
    }
    return 0;
}
float sum(float num1,float num2)
{
    return num1+num2;
}
float diff(float num1,float num2)
{
    return num1-num2;
}
float div(float num1,float num2)
{
    return num1/num2;
}
float mult(float num1,float num2)
{
    return num1*num2;
}