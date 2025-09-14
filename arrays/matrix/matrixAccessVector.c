#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nrows = 10;
    int ncols = 20;
    int elements = nrows * ncols;


   int *m = (int *)calloc(elements,sizeof(int));

   for(int i = 0; i<nrows;i++)
   {
        for(int j=0; j<ncols;j++)
        {
            int p = (i*ncols) + j;

           m[p] = i*10;
        }
   }

    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < ncols; j++)
        {
            int p = (i * ncols) + j;
            printf("%3d ", m[p]);  
        }
        printf("\n");
    }

   
   
}