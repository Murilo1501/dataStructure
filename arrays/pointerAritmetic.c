#include <stdio.h>

int main()
{
    int v[5] = {10,5,4,16,1};


    for(int i=0; i<5; i++){
        printf("%d\n",*(v+i));
    }

    for(int i=0; i<5; i++){
        printf("%d\n",v[i]);
    }

}