#include<stdio.h>
#include<stdlib.h>

int main()
{
    int v_stack[5] = {0,10,20,30,40};

    //static array allocation (stack)

    for(int i=0; i<5; i++)
    {
        printf("%d\n",v_stack[i]);
    }

    //dynamic allocation malloc (heap)
    //garbage
    int *v_heap = (int *) malloc(5 * sizeof(int));

    for(int i=0; i<5; i++)
    {
        printf("%d\n",*(v_heap + i));
    }

    //dynamic allocation calloc (heap)

    int *v_heap_calloc = (int *) calloc(5,sizeof(int));

    for(int i=0; i<5; i++)
    {
        printf("%d\n",*(v_heap_calloc + i));
    }


}