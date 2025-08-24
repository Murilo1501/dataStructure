#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_rows = 2;
    int n_cols = 3;

    int **m = NULL;
    m = (int **)calloc(n_rows,sizeof(int *) );
    for(int i=0; i<n_rows;i++)
    {
        m[i] =  (int *)  calloc(n_cols,sizeof(int));
    }

    for(int i = 0; i<n_rows;i++)
    {
        for(int j=0; j<n_cols; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

     for(int i = 0; i<n_rows;i++)
    {
        for(int j=0; j<n_cols; j++)
        {
            printf("%d",m[i][j]);
        }
    }

    return 0;
}