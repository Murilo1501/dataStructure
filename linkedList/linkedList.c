#include <stdio.h>
#include <stdlib.h>

LinkedList *create();



typedef struct Node{
    int val;
    struct Node *next;
}Node;

typedef struct {
    Node *head;
}LinkedList;  

int main()
{

}

LinkedList *create( )
{
    LinkedList *list = (LinkedList *)calloc(1,sizeof(LinkedList));
}