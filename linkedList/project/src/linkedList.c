#include "linkedList.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int val;
    struct Node *next;
}Node;

typedef struct linkedList{
    struct Node *head;
}LinkedList;

LinkedList *create(){
    linkedList *list = (LinkedList *)calloc(1,sizeof(LinkedList));
    list->head = NULL;

    return list;
}