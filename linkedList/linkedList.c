#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int val;
    struct Node *next;
}Node;

typedef struct {
    Node *head;
}LinkedList;  

LinkedList *createLinkedList();
Node *createNode(int val);
void addFirst(LinkedList *list, int val);
void print(LinkedList *list);
void addTail(LinkedList *list, int val);

int main()
{
    LinkedList *list = createLinkedList();
    addFirst(list,10); 
    addFirst(list,20); 
    addFirst(list,30); 
    addTail(list,7); 
    print(list);

}

LinkedList *createLinkedList( )
{
    LinkedList *list = (LinkedList *)calloc(1,sizeof(LinkedList));
    list->head = NULL;

    return list;
}

Node *createNode(int val)
{
    Node *node = (Node *)calloc(1,sizeof(Node));
    node->val = val;
    node->next = NULL;

    return node;
}

void print(LinkedList *list)
{
    Node *p = list->head;

    while(p != NULL)
    {
        printf("%d \n", p->val);
        p = p->next;
    }
}

void addFirst(LinkedList *list, int val)
{
   
    Node *node = createNode(val);
    node->next = list->head;
    list->head = node;  

}

void addTail(LinkedList *list, int val)
{
     Node *node = createNode(val);
    if(list->head == NULL)
    {
        list->head = node;
    }else{
        Node *p = list->head;

        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = node;
    }


}