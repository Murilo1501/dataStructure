#include <stdio.h>
#include "float_vector.h"


int main()
{
    FloatVector *vec = create(10);

    puts("hello");
    destroy(&vec);
    return 0;

}