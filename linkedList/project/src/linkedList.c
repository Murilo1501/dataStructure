#include "linkedList.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int val;
    struct Node *next;
}Node;

typedef struct linkedList{
    struct Node *head;
    struct Node *tail;
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

void linkedListAddFirst(LinkedList *list, int val){
  
    Node *node = nodeCreate(val);
    node->next = list->head;
    list->head = node;

}

void print(LinkedList *list)
{
    Node *p = list->head;

    while(p != NULL)
    {
        printf("%d\n", p->val);
        p = p->next;
    }
}

void linkedListAddTail(linkedList *list, int val)
{
    Node *node = nodeCreate(val);

    if(list->head == NULL)
    {
        list->head = node;
    } else{
        Node *p = list->head;
        while(p != NULL)
        {
            p = p->next;
        }

        p->next = node;
    }
}

void linkedListAddFirstTail(linkedList *list, int val)
{
    Node *node = nodeCreate(val);

    if(list->head == NULL)
    {
        list->head = node;
        list->tail = node;
    }else{
        node->next = list->head;
        list->head = node;
    }


}



