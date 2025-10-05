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

Node *nodeCreate(int val){
    Node *node = (Node *)calloc(1,sizeof(Node));
    node->val = val;
    node->next = NULL;

    return node;
}

LinkedList *linkedListCreate(){
    linkedList *list = (LinkedList *)calloc(1,sizeof(LinkedList));
    list->head = NULL;

    return list;
}

