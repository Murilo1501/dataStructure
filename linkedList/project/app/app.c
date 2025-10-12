#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int main()
{
    linkedList *list = linkedListCreate();
    linkedListAddFirst(list,10); 
    linkedListAddFirst(list,20); 
    linkedListAddFirst(list,30);  
    print(list);
}