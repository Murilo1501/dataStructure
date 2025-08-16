#include <stdio.h>
#include <stdlib.h>

void sumValueToArray(int v[],int n, int value);

void printArray(int *v, int n);

int main()
{
    int v[5] = {10,20,30,40,50};
    printArray(v,5);
    sumValueToArray(v,5,5);
    printArray(v,5);


}

void sumValueToArray(int v[],int n, int value){
    for(int i=0; i<n; i++)
    {
        v[i] += value;
    }
}

void printArray(int *v, int n)
{
    for(int i=0; i<n; i++)
    {
       printf("%d\n",v[i]);
    }
}