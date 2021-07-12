#include <stdio.h>
#include <stdlib.h>
int * make_array(int elem,int val);
void show_array(const int ar[],int n);
int main(void)
{
    int * pa;
    int size;
    int value;
    printf("Введите количество элементов: ");
    while (scanf("%d",&size) ==1 && size>0)
    {
        printf("Введите значение для инициализации: ");
        scanf("%d",&value);
        pa=make_array(size,value);
        if (pa)
        {
            show_array(pa,size);
            free(pa);
        }
        printf("Введите количество элементов (<1 для завершения): ");
    }
    printf("Программа завершена.\n");
    return 0;
}
int * make_array(int elem,int val)
{
    int * ar;
    ar=malloc(elem * sizeof(int));
    for (int i=0;i<elem;i++)
    {
        ar[i]=val;
    }
    return ar;
}
void show_array(const int ar[],int n)
{
    for (int i=0;i<n;i++)
        {
            printf("%d ",ar[i]);
            if ((i+1)%8==0)
            printf("\n");
            if (i==n-1)
            printf("\n");
        }

}