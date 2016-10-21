# include <stdio.h>
# include <stdlib.h>
# include "matrix.h"

void malloc_matrix(matrix *a)
{   
    (*a).point=(int**)malloc((*a).row*sizeof(int*));

    for (int i=0; i<(*a).row; i++)
    {
        (*a).point[i]=(int*)malloc((*a).column*sizeof(int));
    }
}

void free_matrix(matrix *a)
{
    for (int i=0; i<(*a).row; i++)
    {
        free((*a).point[i]);
    }
    
    free ((*a).point);

}



