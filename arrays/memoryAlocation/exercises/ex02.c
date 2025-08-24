#include <stdio.h>
#include <stdlib.h>

void printArray(int *v, int n);
void sumValueToArray(int *v, int n, int value);
void freeVector(int **v);

int main()
{
  int *v  = (int *) calloc(5,sizeof(int));


  for(int i=0; i<5; i++)
  {
    *(v + i) += i + 1;
  }

  printArray(v,5);
  sumValueToArray(v,5,5);
  printArray(v,5);


  freeVector(&v);


}

void printArray(int *v, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\n",*(v+i));
    }
}

void sumValueToArray(int *v, int n, int value)
{
    for(int i=0; i<n; i++)
    {
        *(v+i) += value;
    }
}

void freeVector(int **v)
{
  free(*v);
  *v = NULL;
}