#include <stdio.h>
int sum(int a, int b);

int main()
{
    int a =2,b =3,c = 0;

   c =  sum(a,b);
   printf("%d",c);

}

int sum(int a, int b)
{
    return a + b;
}