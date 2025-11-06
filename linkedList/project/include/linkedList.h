#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node Node;
typedef struct linkedList linkedList;

linkedList *linkedListCreate();
void linkedListAddFirst(linkedList *list,int val);
Node *nodeCreate(int val);
void print(linkedList *list);
void linkedListAddTail(linkedList *list,int val);
void linkedListAddFirstTail(linkedList *list, int val);


#endif