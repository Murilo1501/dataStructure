#include <stdio.h>
void swap(int *a, int *b);

int main(void)
{
    int a = 10,b = 20;

    printf("%d\n",a);
    printf("%d\n",b);

    swap(&a,&b);

    printf("%d\n",a);
    printf("%d\n",b);
}

void swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}