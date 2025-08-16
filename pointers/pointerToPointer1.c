#include <stdio.h>

int main(void)
{

    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;

    printf("%d\n",**p2);

    **p2 = 99;

   
    printf("%d",**p2);




    return 0;
}