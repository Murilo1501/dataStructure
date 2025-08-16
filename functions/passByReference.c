#include <stdio.h>
void sum(int a, int b,int *c);

int main()
{
    int a = 2, b = 3,c = 0;

   sum(a,b,&c);
   printf("%d", c);
   


}

void sum(int a, int b, int *c)
{
    *c = a + b;
}