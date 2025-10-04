#include "float_vector.h"
#include <stdlib.h>
#include <stdio.h>

struct float_vector{
    int capacity;
    int size;
    float *data;
};



FloatVector *create(int capacity)
{
    FloatVector *vec = (FloatVector *) calloc(1,sizeof(FloatVector));
    vec->size = 0;
    vec->capacity = capacity;
    vec->data = (float *)calloc(capacity,sizeof(float));

    return vec;
}


void destroy(FloatVector **vec)
{
    free((*vec)->data);
    free(*vec);
    *vec = NULL;
}

void append(FloatVector *vec, float val)
{

    if(vec->size == vec->capacity)
    {
        printf("Vector is full");
        exit(EXIT_FAILURE);
    }

    vec->data[vec->size] = val;
    vec->size++;
}

void print(FloatVector *vec)
{
    for(int i=0; i<vec->size; i++)
    {
        printf("%f",vec->data[i]);
    }
}

int size(FloatVector *vec)
{
    return vec->size;
}

int capacity(FloatVector *vec)
{
    return vec->capacity;
}
