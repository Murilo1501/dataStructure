#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node Node;
typedef struct linkedList linkedList;

linkedList *linkedListCreate();
void linkedListAddFirst(linkedList *list,int val);
Node *nodeCreate(int val);


#endif