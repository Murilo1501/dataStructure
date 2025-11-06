#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int main()
{
    linkedList *list = linkedListCreate();
    linkedListAddTail(list,20); 
    linkedListAddFirst(list,10); 
    linkedListAddFirst(list,20); 
    linkedListAddFirst(list,30);  
    
    print(list);
}